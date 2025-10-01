#include<stdio.h>
int main()
{
    int n,m,a,b,k,i,sum,avg;
    sum=0;
    printf("enter total number of jars: ");
    scanf("%d", &n);
    printf("enter the number of operations: ");
    scanf("%d", &m);
    for(i=0;i<m;i++)
    {
        printf("enter the lower index of jar: ");
        scanf("%d", &a);
        printf("enter the higher index of jar: ");
        scanf("%d", &b);
        printf("enter the number of candies to fill: ");
        scanf("%d", &k);
        sum=sum+((b-a+1)*k);
    }
    avg=sum/n;
    printf("the average number of candies per jar is: %d", avg);
    return 0;
}