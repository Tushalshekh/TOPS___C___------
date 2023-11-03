#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the num:");
    scanf("%d%d",&a,&b);
    printf("enter your choice: \n(1)addition\n(2)subtraction\n(3)multiplaction\n(4)devision\n ");
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("%d",a+b);
        break;

        case 2:
        printf("%d",a-b);
        break;

        case 3:
        printf("%d",a*b);
        break;

        case 4:
        printf("%d",a/b);
        break;

        default:
        printf("plz enter the 1 to 4 number....!!");

    }





    return 0;
}