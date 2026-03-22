#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,flag1=0,flag2=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>b)
        {
            swap(&a,&b);
        }
        for(int i=a;i<b;i++)
        {
            if(c==i||d!=i)
            {
                flag1=1;
            }
            else if(c!=i||d==i)
            {
                flag2=1;
            }
        }

        if(flag1==1)
        {
            for(int i=a;i<b;i++)
        {
            if(c!=i||d==i)
            {
                flag1=1;
            }
        }
        }
         if(flag2==1)
        {
            for(int i=a;i<b;i++)
        {
            if(c==i||d!=i)
            {
                flag2=1;
            }
        }
        }


        if(flag1==1 && flag2==1)
        {
            printf ("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
