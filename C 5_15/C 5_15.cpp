// C 5_15.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

unsigned long long int fibonacci(unsigned int n);

int main(void){

	unsigned long long int result;
	unsigned int number;

	printf("%s", "Enter an integer:");
	scanf_s("%u", &number);

	result = fibonacci(number);

	printf("Fibonacci( %u ) = %llu\n", number, result);

}

unsigned long long int fibonacci(unsigned int n){

	if (0 == n || 1 == n){
	
		return n;
	
	}
	else{
	
		return fibonacci(n - 1) + fibonacci(n - 2);
	
	}

}