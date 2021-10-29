#include <stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter the number of rows");
	scanf("%d",&r);
	printf("\nEnter the number of columns");
	scanf("%d",&c);
	int a[r][c],b[r][c],arr[r][c];
	printf("\nEnter the elements of first matrix row-wise");
	for(i=1;i<=r;i++)
	{
	    for(j=1;j<=c;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	printf("\nEnter the elements of second matrix row-wise");
	for(i=1;i<=r;i++)
	{
	    for(j=1;j<=c;j++)
	    {
	        scanf("%d",&b[i][j]);
	    }
	}
	for(i=1;i<=r;i++)
	{
	    for(j=1;j<=c;j++)
	    {
	        arr[i][j]=a[i][j]+b[i][j];
	    }
	}
	printf("\nFinal matrix after addition\n");
	for(i=1;i<=r;i++)
	{
	    for(j=1;j<=c;j++)
	    {
	        printf("%d ",arr[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
