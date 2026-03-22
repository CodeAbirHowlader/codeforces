#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,fact=1;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
                for(int i=0;i<n;i+=2)
        {
            if(a[i] % 2 != a[0] % 2)
            {
                fact = 0;
                break;
            }
        }
if(fact==1)
{


        for(int i=1;i<n;i+=2)
        {
            if(a[i] % 2 != a[1] % 2)
            {
                fact = 0;
                break;
            }
        }
}

        if(fact==1)
         {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
    }
}
