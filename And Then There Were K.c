#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long a=1;
        while(a<=n)
        {
            a*=2;
        }
        a/=2;
        printf("%lld\n",a-1);
    }
}
