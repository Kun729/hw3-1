#include<stdio.h>
#include<stdlib.h>

double Power(double, int);

int main(void)
{
	int k;
	double Ans;

	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5的%d次方=%.3f\n",k,Ans);
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

