#include<stdio.h>
#include<stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
	int n1, n2, n3;
	printf("��J�T�Ӿ��:");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	printf("�̤j�ȬO%d\n", maximum(n1, n2, n3));
	system("pause");
	return 0;
}
int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}