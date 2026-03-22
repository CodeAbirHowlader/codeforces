#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,flag=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            int diff = abs(a[i] - a[i + 1]);
            if (diff != 5 && diff != 7)
            {


                flag=1;
                break;
            }

            }

        if(flag==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
