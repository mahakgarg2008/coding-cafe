#include<stdio.h>

int main()
{
    int num[4]={2,3,5,10};
    int sum=0,product=1;

    for(int i=0;i<4;i++)
    {
       sum+= num[i];
       product*=num[i];
    }
    printf("sum is %d\n", sum);
    printf ("product is %d", product);
    return 0;

}
