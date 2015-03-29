// C 5_11.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}



enum Status {CONTINUE,WON,LOST};

int rollDice(void);

int main(void){
	
	int sum;
	int myPoint;

	enum Status gameStatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum){

		case 7:
		case 11:
			gameStatus = WON;
			break;

		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;

	}
		
	while (CONTINUE == gameStatus){
		
		sum = rollDice();

		if (sum == myPoint){
			
			gameStatus = WON;

		}
		else{
			
			if (7 == sum){
				
				gameStatus = LOST;
				
			}

		}

	}
		
	if (WON == gameStatus){
		
		puts("Players wins");
		
	}
	else{

		puts("Players loses");
		
	}

}
	
int rollDice(void){
	
	int die1;
	int die2;
	int workSum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;

	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;
	
}
	
	
	
	










