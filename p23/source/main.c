#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status { Continue, Won, Lost };
int rolldice(void);

int main(void)
{
	int sum;
	int mypoint;

	enum Status gamestatus;

	srand(time(NULL));
	sum = rolldice();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = Won;
		break;
	case2:
	case 3:
	case 12:
		gamestatus = Lost;
		break;

	default:
		gamestatus = Continue;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}

	while (gamestatus == Continue)
	{
		sum = rolldice();
		if (sum == mypoint)
		{
			gamestatus = Won;
		}
		else
		{
			if (sum == 7)
			{
				gamestatus = Lost;
			}
		}
	}
	if (gamestatus == Won)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player loses\n");
	}

	system("pause");
	return 0;
}

int rolldice(void)
{
	int die1, die2,worksum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;

	printf("Player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}