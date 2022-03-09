/* write a program multipilcation matrix
Date:-23/02/2022*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int m1[3][3],m2[3][3],sum[3][3],i,j;
  clrscr();
  for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
	{
	     printf("\n Enter Value for m1[%d][%d]",i,j);
	     scanf("%d",&m1[i][j]);
	}
      }
      clrscr();
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 printf("%d\t",m1[i][j]);
		  printf("\n");

      }
	for(i=0;i<3;i++)
	 {
	       for(j=0;j<3;j++)
	 {
	       printf("\n Enter value for m2[%d][%d]:",i,j);
	       scanf("%d",&m2[i][j]);
	 }
	 }
	    clrscr();
	    for(i=0;i<3;i++)
	    {
	      for(j=0;j<3;j++)
	      printf("%d\t",m2[i][j]);
	      printf("\n");
	    }
		 printf("\n multipilcation of two matrix");
		 printf("\n...........................\n");
		  for(i=0;i<3;i++)
	    {
		   for(j=0;j<3;j++)
		   {
			sum[i][j]=m1[i][j]*m2[i][j];
			printf("%d\t",sum[i][j]);
		   }
		   printf("\n");
	    }
		      getch();
}

