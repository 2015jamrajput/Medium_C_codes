#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x\n");
    scanf("%d", &x);
    if(x%2)
    {
        printf("the given number is odd");
    }
    else
    {
        printf("the number is even");
    }
    return 0;
}
