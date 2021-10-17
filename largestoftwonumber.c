#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter the numbers that you want ");
    scanf("%d %d", &a,&b);
    if(a>b)
    {
        printf("%d \n is larger then \n %d", a,b);
    }
    else
    {
        printf("%d \n is larger then \n %d", b,a);
    }
    return -1;
}
    
