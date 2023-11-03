#include <stdio.h>
int main()
{
    int a, b;
    printf("select the fruit color: \n(1)green\n(2)red\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf(" green \n(1)big\n(2)small\n");
        scanf("%d", &b);
        
        
            switch (b)
            {
            case 1:
                printf("tarbuch,popaiyu,seradi.....");
                break;

            case 2:
                printf("jamfal,drax.....");
                break;
            }
            break;
        
    case 2:
        printf(" red \n(1)big\n(2)small\n");
        scanf("%d",&b);
        
        {
            switch (b)
            {
            case 1:
                printf("apple.....");
                break;

            case 2:
                printf("alu,setur.....");
                break;
            }
            break;
        }
    default:
        printf("not found");
        break;

        return 0;
    }
}