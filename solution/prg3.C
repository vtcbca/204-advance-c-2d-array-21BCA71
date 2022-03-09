/* Write a program to print matrix 3*3 and check it is dioganal or not
date:23/feb/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int v1[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for v1[%d][%d]:",i,j);
			scanf("%d",&v1[i][j]);
		}
	}
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",v1[i][j]);
			printf("\n");
	}
	if((i==j)&&v1[0][i])
	{
		printf("\n It is not diognal matrix");
	}
	else
	{
		printf("\n It is a diognal matrix");
	}
	getch();
}















