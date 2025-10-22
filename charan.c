#include <stdio.h>
void hallowdaimond(int n)
{
    int i,j,sp,is;
    for(i=1;i<=(n/2+1);i++)
    {
        sp=(n/2+1)-i;
        for(j=0;j<sp;j++)
        {
            printf(" ");
        }
        if(i==1)
        {
            printf("*\n");
        }
        else
        {
            printf("*");
            is=2*i-3;
            for(j=0;j<is;j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    for(i=(n/2);i>=1;i--)
    {
        sp=(n/2+1)-i;
        for(j=0;j<sp;j++)
        {
            printf(" ");
        }
        if(i==1)
        {
            printf("*\n");
        }
        else{
            printf("*");
            is=2*i-3;
            for(j=0;j<is;j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        printf("Case #%d:\n",i);
        hallowdaimond(n);
    }
    return 0;
}
