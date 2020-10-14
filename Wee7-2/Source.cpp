#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter age : ");
	scanf_s("%d", &a);

	if (a >= 18 && a <= 60)
	{
		for (b = 1;b <= a;b++)
		{
			printf("%d->", b);
		}
	}
	else
	{
		printf("END!!");
	}
}