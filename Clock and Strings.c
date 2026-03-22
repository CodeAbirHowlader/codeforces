#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;

        scanf("%d%d%d%d",&a,&b,&c,&d);

       if((a<c&&d<b) || (a>c&&d>b))


        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
