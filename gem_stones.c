#include<stdio.h>
int main()
{
    int n,b,i,j,si,sum=0,count=0;
    char s[50];
    printf("enter the number of gemstones: ");
    scanf("%d",&n);
    int a[n+2][26];
    for(i=0;i<26;i++)
    {
        b=i+97;
        a[0][i]=(char)b;
    }
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<26;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("enter the number of characters in this gem stone: ");
        scanf("%d", &si);
        printf("enter the elements in these gemstones: ");
        for(j=0;j<si;j++)
        {
            scanf(" %c",&s[j]);  //  " %c" makes sure enter key isn't considered a character
            b=(int)s[j];
            if(a[i][b-97]<1)
            {
                a[i][b-97]++;
            }
        }    
    }
    for(i=0;i<26;i++)
    {
        for(j=1;j<n+1;j++)
        {
            sum=sum+a[j][i];
            if(sum==n)
            {
                printf("%c", a[0][i]);
                count++;
            }
        }
        sum=0;
    }
    printf("\n%d", count);
    return 0;
}