#include<stdio.h>
void main()
{
    for(int i=1;i<=5;++i){//rows

        for(int j=i;j<=5;j++)//colns
        {
            printf("%d " ,j);
        }
        printf("\n");
    }
}