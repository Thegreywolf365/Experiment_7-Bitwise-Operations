
#include <stdio.h>

signed int countbit(int k)
{
    int count = 0;
    while (k)
    {
        if((k&1)==1)
        {
            count++;
        }
        k = k>>1;
    }
    return count;
}
int main()
{
    int k,count = 0;
    printf("enter number :- ");
    scanf("%d",&k);
    int bits = countbit(k);
    printf("bits = %d",bits);

}