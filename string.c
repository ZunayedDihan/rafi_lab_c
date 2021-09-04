#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,a=0;
    scanf("%d%d",&n,&k);
    char str[n+5];
    char s[(n*k)+5];
    char s1[(n*k)+5];
    scanf("%s",str);
    int b=n-1;
    while(k--)
    {
        for(int i=0;i<strlen(str);i++)
        {
            s[a++]=str[i];
        }
    }
    for(int i=0;i<strlen(s);i++)
    {
        if((s[b]==s[b+1])&& b==i)
        {
            continue;
            b+=n-1;
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}
