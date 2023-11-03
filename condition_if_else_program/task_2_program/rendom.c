// ************************************to find  even or odd use if else statement*************************
 // #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("%d is even number ",a);
//     }
//     else{
//         printf("%d is odd number",a);
//     }


//     return 0;
// }

// ***************************************to find  maximum number if else statement[2]**********************

// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3,max;
//     printf("Enter the first number: ");
//     scanf("%d",&num1);
//     printf("Enter the second number: ");
//     scanf("%d",&num2);
//     printf("Enter the third number: ");
//     scanf("%d",&num3);
//     if(num1>num2,num1>num3){
//         printf("%d is max number",num1);
//     }
//     else if(num2>num1,num2>num3){
//         printf("%d is max number");
//     }
//     else{
//         printf("%d is max number",num3);
//     }

//     return 0;
// }
// ************************************to find  maximum number if else statement[1]**********************
 
 #include<stdio.h>
 int main()
 {
    int num1,num2,num3;
    printf("Enter the number: ");
    scanf("%d",&num1);
    printf("Enter the number: ");
    scanf("%d",&num2);
    printf("Enter the number: ");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is max number",num1);
        }
    }
    else if(num2>num1){
        if(num2>num3){
            printf("%d is max number",num2);
        }
    }
    else if(num3>num1){
        if(num3>num2){
        printf("%d is max number",num3);
        }
    }



    return 0;
 }