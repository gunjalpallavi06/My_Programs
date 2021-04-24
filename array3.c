/*3)WAP to enter the five element and display in ascending and decending order ?
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j;
	printf("Enter the Values in Array:-");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nValues in Array Before Sorting are:-\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]-->%d\n",i,a[i]);
	}
	
	printf("Values in Array in Asending Order are:-\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("a[%d]-->%d\n",i,a[i]);
	}
	
	printf("Values in Array in Desending Order are:-\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("a[%d]-->%d\n",i,a[i]);
	}
	
}


/*output:-
Enter the Values in Array:-45 87 12 41 65

Values in Array Before Sorting are:-
a[0]-->45
a[1]-->87
a[2]-->12
a[3]-->41
a[4]-->65
Values in Array in Asending Order are:-
a[0]-->12
a[1]-->41
a[2]-->45
a[3]-->65
a[4]-->87
Values in Array in Desending Order are:-
a[0]-->87
a[1]-->65
a[2]-->45
a[3]-->41
a[4]-->12

*/
