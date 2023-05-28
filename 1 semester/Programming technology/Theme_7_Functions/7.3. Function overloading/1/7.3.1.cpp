#include <stdio.h>
#include <iostream>

// ИСКОМОЕ ЗНАЧЕНИЕ
int sqrta()
{
	int a, i = 0;
	bool fl = 0;
	printf("Hello , enter number for show sqrt\n");
	scanf("%i", &a);

	while (fl == 0)
	{

		if (i * i == a)
		{
			printf("Root of number %i ", a);
			printf("it is %i", i);
			fl = 1;
			i = a;
			return a;
		}
		else
		{
			i++;
		}
		if (i == 100000000)
		{
			printf("Number dont have natural root");
			return 0;
		}
	}
}

// УКАЗАТЕЛЬ
int sqrta(int (*pb))
{
	
	int i = 0;
	bool fl = 0;

	while (fl == 0)
	{

		if (i * i == (*pb))
		{
			printf("* via additional argument - pointer\n");
			printf("Root of number %i ", *pb);
			printf("it is %i", i);
			fl = 1;
			i = *pb;
			return *pb;
		}
		else
		{
			i++;
		}
		if (i == 100000000)
		{
			printf("Number dont have natural root");
			return 0;
		}
	}
}

// ССЫЛКА

int sqrta(int &c)
{
	int i = 0;
	bool fl = 0;

	while (fl == 0)
	{

		if (i * i == c)
		{
			printf("* through an additional argument\n");
			printf("Root of number %i ", c);
			printf("it is %i", i);

			fl = 1;
			i = c;
			return c;
		}
		else
		{
			i++;
		}
		if (i == 100000000)
		{
			printf("Number dont have natural root");
			return 0;
		}
	}
}

int main()
{

	int b, c;

	sqrta();

	printf("\nEnter number for show sqrt\n");
	scanf("%i", &b);
	sqrta(&b);

	printf("\nEnter number for show sqrt\n");
	scanf("%i", &c);
	sqrta(c);
}