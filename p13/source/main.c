#include<stdio.h>
#include<stdlib.h>

double Power(double, int);

int main(void)
{
	int k;
	double Ans;

	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5��%d����=%.3f\n",k,Ans);
	system("pause");
}
double Power(double x, int n)
{
	double powerxn = 1;
	for (int i = 1; i <= n; i++)
	{
		powerxn = powerxn * x;
	}
	return powerxn;
}

