// C 5_13.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

int x = 1;

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

void useLocal(void){

	int x = 25;

	printf("\nlocal x in useLocal is %d after entering useLocal\n", x);

	++x;

	printf("local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void){

	static int x = 50;

	printf("\nlocal static x is %d on entering useStaticLocal\n", x);

	++x;

	printf("local static x is %d on exiting useStaticLocal\n", x);

}

void useGlobal(void){

	printf("\nglobal x is %d on entering useGlobal\n", x);

	x *= 10;

	printf("global x is %d on exiting useGlobal\n", x);

}

int main(void){

	int x = 5;

	printf("local x in outer scope of main is %d\n", x);

	{
		int x = 7;
		printf("local x in inner scope of main is %d\n", x);
	
	}

	printf("local x in outer scope of main is %d\n", x);

	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();

	printf("\nlocal x in main is %d\n",x);

}