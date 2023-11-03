#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enetr the number : ");
    scanf("%d", &a);
    printf("enetr the number : ");
    scanf("%d", &b);
    printf("enetr the number : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the max number", a);
        }
    }
    else if (b > c)
    {
        // if (b > c)
        {
            printf("%d is the max number", b);
        }
    }
    // else if (c > a)
    // {
    //     // if (c > b)
    //     {
    //         printf("%d is max number", c);
    //     }
    // }
    // else if (c > a)
    // {
    //     if (c > b)
    //     {
    //         printf("%d is the max number", c);
    //     }
    // }
    else
    {
        printf("%d is the max number", c);
    }
    return 0;
}