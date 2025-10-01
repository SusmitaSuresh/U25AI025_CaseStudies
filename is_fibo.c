#include<stdio.h>
int main()
{
    int n,i,t,j;
    printf("enter number of testcases: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a=0,b=1,sum=0,q=0;    //resetting
        printf("enter a number: ");
        scanf("%d",&n);
        while(a<=n)
        {
        if(n==a)
        {
            q=1;
            break;
        }
        sum=a;
        a=b;
        b=sum+b;
        }
        if(q==1)
        {
            printf("IsFibo");
        }
        else
        {
            printf("IsNotFibo");
        }
        printf("\n");
    }
    return 0;
}