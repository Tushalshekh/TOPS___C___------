#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enetr the number : ");
    scanf("%d", &a);
    printf("enetr the number : ");
    scanf("%d", &b);
    printf("enetr the number : ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("%d is max",a);
        }
    }
    else if(b>c){
        printf("%d is max",b);

    }
    else{
        printf("%d is max",c);
    }



    return 0;
}