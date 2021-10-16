#include <stdio.h>
int main()
{
    int y;
    printf("enter the year which you want to check\n");
    scanf("%d", &y);
    if (y % 400 == 0)
    {
        printf("the given year is leap year");
    }
    else if (y % 4 == 0 && y % 100 != 0)
    {
        printf("the given year is  a leap year");
    }
    else
    {
        printf("its not a leap year");
    }
     return 0;
}
