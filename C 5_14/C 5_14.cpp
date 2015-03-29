// C 5_14.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

unsigned long long int factorial(unsigned int number);

int main(void){

	unsigned int i;

	for (i = 0; i <= 21; ++i){
	
		printf("%u! = %-llu\n",i,factorial(i));
	
	}

}

unsigned long long int factorial(unsigned int number){

	if (number <= 1){
	
		return 1;
	
	}
	else{
	
		return (number*factorial(number - 1));

	}

}