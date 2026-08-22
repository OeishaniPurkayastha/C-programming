#include <stdio.h>
int main()
{
    int subjects ;
    printf("enter subjects:");
    scanf("%d",&subjects);
    if (subjects==1)
    {
        printf("gift amount is 100");
    }
    else if (subjects==2)
    {
        printf("gift amount is 200");
    }
    else if (subjects==3)
    {
        printf("gift amount is 300");
    }
    else if (subjects==4)
    {
        printf("gift amount is 400");
    }
    else if (subjects==5)
    {
        printf("gift amount is 500");
    }
    else
    {
        printf("invalid input");
        return 0;
    }
}