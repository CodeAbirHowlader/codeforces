#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        long long a[n];
        for (int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }


        long long sum=0;
        for (int i=0;i<n;i++)
        {
            sum+=a[i];
        }

        long long maxSum=sum;

        for (int i=0;i<n-1;i++)
        {
            long long newSum=sum-a[i]-a[i+1]+(-a[i])+(-a[i+1]);
            if (newSum>maxSum)
            {
                maxSum=newSum;
            }
        }

        printf("%lld\n",maxSum);
    }

}
