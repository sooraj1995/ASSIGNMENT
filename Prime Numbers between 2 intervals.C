//Program to Print Prime Numbers between 2 Intervals

#include<stdio.h>
#include<conio.h>
void main()
{

//variable declaration

int n,l1,l2,i,flag;
clrscr();

//Ask user to enter the limits

printf("Enter the lower limit l1 and upper limit l2\n");
scanf("%d%d",&l1,&l2);

//display message

printf("\nPrime numbers between %d and %d  are:\n",l1,l2);

//check the numbers between the intervals, using for loop

for(n=l1;n<l2;n++)
{
//skip 0 and 1 as the are neither prime nor composite

if(n==0|n==1)
{
continue;
}

//set flag as 0 to indicate n is prime or not

flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
//flag=0 means given number n is prime
//flag=1 means n is not prime

if(flag==0)
printf("\t%d",n);

}
getch();
}
