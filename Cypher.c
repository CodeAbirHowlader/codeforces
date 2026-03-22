
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
          for(int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            char s[100];
            scanf("%s", s);
            for(int j=0;s[j]!='\0';j++)
            {
                if(s[j]=='D'){
                    a[i]++;
                {
                    if(a[i]==10) a[i]=0;
                }
                }
                else
                {
                    a[i]--;
                {
                    if(a[i]==-1) a[i]=9;
                }
                }
            }
          }
          for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }

}
