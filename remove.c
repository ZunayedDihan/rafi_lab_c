#include<stdio.h>
int main()
{
    int n,count=0,a=0;
    scanf("%d",&n);
    int ar[n];
    int ar1[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                break;
            }
            else if(ar[i]!=ar[j] && j==n-1)
            {
                count++;
                ar1[a++]=ar[i];
            }
        }
    }
    ar1[a++]=ar[n-1];
    printf("%d\n",a);
    for(int i=0;i<a;i++) printf("%d ",ar1[i]);
    printf("\n");

}
