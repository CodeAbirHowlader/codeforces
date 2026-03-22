#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        int sum=0;
        scanf("%lld",&n);
        long long a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<0)
            {
                if(abs(a[i])>abs(a[i+1]) ||abs(a[i])>abs(a[i-1]))
                   {
                       a[i]=-a[i];
                       a[i+1]=-a[i+1];
                       break;
                   }
            }
            for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }

        }
        printf("%d\n",sum);
    }
}
