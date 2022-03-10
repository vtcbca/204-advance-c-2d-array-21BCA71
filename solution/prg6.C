#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,b;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Value for a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	b=a[0][0]+a[1][1]+a[2][2];
	printf("\nSum of Diagonal is %d",b);
	getch();
}