#include<stdio.h>

int main()
{
    int number;
    printf("Please enter a number= ");
    scanf("%d",&number);

    if((number & 1) == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}