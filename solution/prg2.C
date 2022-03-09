/*write a program two enter 5 string and print it*/

#include<stdio.h>
#include<conio.h>
void main()
{
   char s[5][10];
    // s contain 5 string and each string has 9 char
   int i;
   clrscr();
   // to input 5 string
   for(i=0;i<5;i++)
   {
	printf("enter name %d:",i+1);
	flushall();
	gets(s[i]);
   }
    // logic: to print 5 string
	    for(i=0;i<5;i++)
	    printf("Name %d:%c\n",i+1,s[i][0]);

	    getch();
}

