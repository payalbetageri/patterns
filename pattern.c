#include<stdio.h>

void inverted_triangle()
{
	int n;
	printf("enter value");
	scanf("%d",&n);
	//inverted 01
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
}

void hollow_square()
{
	int n;
	printf("enter value");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
				printf("*\t");
			else
				printf("\t");
		}
		printf("\n\n");
	}
}

void hollow_rect()
{
	int a,b;
	printf("enter length and breadth with space");
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(i==1 || i==a || j==1 || j==b)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void pyramid()
{
	int n,k=0;
	scanf("%d",&n);
	for(int i=1;i<=n;++i,k=0)
	{
		for(int j=0;j<=n-i;++j)
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
}

void main()
{
	while(1)
	{
		printf("1) inverted 01 \n 2) hollow square \n 3) hollow rectangle \n 4) pyramid \n");
		int ch;
		printf("enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("inverted 01\n");
				inverted_triangle();break;
			case 2:printf("hollow square\n");
				hollow_square();break;
			case 3:printf("hollow rectangle\n");
				hollow_rect();break;
			case 4:printf("pyramid\n");
				pyramid();break;
		}
	}
}


