#include<stdio.h>
int main()
{
    int t,n,i,j,var,count;
    count=0;
    printf("enter the number of testcases: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        printf("\nenter the number: ");
        scanf("%d", &n);
        var=n;
        while(n!=0)
        {
            j=n%10;
            if(var%j==0)
            {
                count++;
            }
            n=n/10;
        }
        printf("%d was divided exactly at %d digits\n",var,count);
        count=0;
    }
    return 0;
}