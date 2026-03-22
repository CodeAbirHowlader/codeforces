#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,flag=0;
        scanf("%d",&n);
        char s[100];
        scanf("%s",s);
        if(n==1)
        {
            printf("YES\n");
        }
        else if(n>2)
        {
            printf("NO\n");
        }
        else
        {
            for(int i=0;i<2;i++)
            {
                if(s[0]!=s[1])
                {
                    flag=1;
                }

            }
             if(flag==1)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
        }
    }
}
