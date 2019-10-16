		/* Program to insert an element into an array */


		#include<stdio.h>
		#include<conio.h>
		void main()
		{
		int a[100],i,s,n,p;
		clrscr();

		//ask the user to enter the size of array

		 printf("Enter the size of array\n");
		 scanf("%d",&s);

		 //ask the user to enter the elements of the array

		 printf("Enter the array elements\n");

		 //scan the array using for loop

		for(i=0;i<s;i++)
		{
		scanf("%d",&a[i]);
		}

		//ask the user to enter the posion to add new elememt

		printf("Enter the position p where you want to add a new element \n");
		scanf("%d",&p);

		//ask the user to enter the elment to add

		printf("enter the value n to insert\n");
		scanf("%d",&n);

		//shifting the elements (from s-1) to right

		for(i=s-1;i>=p-1;i--)

		{
		a[i+1]=a[i];
		}

		//inserting new value

		a[p-1]=n;

		printf("The resultant array is\n");

		/*
		the array size gets increased by 1 after
		insertion of new element
		*/

		for(i=0;i<=s;i++)  //print the resultant array
		{
		printf("%d\n",a[i]);

		}
		getch();
		}






























































































