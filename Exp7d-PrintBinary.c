#include<stdio.h>
int main()
{
    int i,j,k;
    printf(" Please, Enter a Number : ");
    scanf("%d",&i);
    printf("\n ");
    for(j=7;j>=0;j--)
    {
        k=i&(1<<j);
        if(k==0)
            printf("0");
        else
            printf("1");
    }
    return 0;
}
