#include<stdio.h>
int main()
{
	int array[100],data,i,n;
	printf("enter number of element in array\n");
	scanf("%d",&n);
	
	printf("enter element of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("enter a number to search\n");
	scanf("%d",&data);
	
	for(i=0;i<n;i++)
	{
		if(array[i]==data)
		{
			printf("%d is present at location %d.\n",data,i+1);
			break;
		}
	}
	if(i==n)
	printf("%d isn't present in the array.\n",data);
	return 0;
	
	
}
