#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
    char n[32];
    scanf("%s",n);
    char a[]="314159265358979323846264338327";
    for(int i=0;n[i]!='\0';i++)
    {

       if(n[i]==a[i]) {
        count++;

       }
       else
       {


       break;
       }

    }
    printf("%d\n",count);


    }

}
