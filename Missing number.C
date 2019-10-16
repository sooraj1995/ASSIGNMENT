// Program to find the missing numbers in the given integer array of 1 to 100

#include<stdio.h>
#include<conio.h>
int main()
{
    int array[500],no,large,small,i,j;
    clrscr();

    // taking total number of elements in the array

    printf("Enter no of elements: ");
    scanf("%d",&no);

    // Accepting values of the array and finding
    // the smallest and largest value in the input array

    printf("Enter elements into array : \n");
    large = -1;
    small = -1;
    for (i = 0; i < no; i++)
     {
	scanf("%d", &array[i]);
	if (array[i] < small || small == -1)
	{
	    small = array[i];
	}
	if (array[i] > large || large == -1) {
	    large = array[i];
	}
     }

    //taking all numbers between smallest and largest value in the
    // input array and check whether it exist in the input or not.

    printf("The missing numbers are: ");
    for(i=small;i<=large;i++)
     {
	int flag = 0;
	for(j=0;j<no;j++)
	 {
	    if (i == array[j])
	    {
		flag = 1;
		break;
	    }
	 }
	if (flag == 0)
	{
	    printf("%d ",i);
	}
    }
getch();
}












