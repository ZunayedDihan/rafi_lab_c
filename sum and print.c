#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int a,b,sum=0;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
