#include<stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,p;
        scanf("%d%d%d",&n,&k,&p);
        if(p==0)
        {
            printf("-1\n");
        }
        int l=abs(k)/p;
        if(l<n)
        {
            if(abs(k)%2==0){
            printf("%d\n",l);
            }
            else
            {
               printf("%d\n",l+1);
            }
        }
        else
        {
            printf("-1\n");
        }
    }
}
