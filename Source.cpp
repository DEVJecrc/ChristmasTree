#include<stdio.h>
#include<conio.h>

void main()
{
	int i, s, n, k = 0;
	n = 10;
	for (i = 1; i <= n; i++)
	{
		for (s = 1; s <= n - 1; s++)
		{
			printf(" ");

		}
		while(k!=2*i-1)
		{
			printf("*");
			++k;

		}
		printf("\n");

	}
	printf("\t || ");

	printf("merry christmas");
	_getch();
}