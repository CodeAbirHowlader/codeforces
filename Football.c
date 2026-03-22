#include<stdio.h>
int main()
{
    char arr[105];
    scanf("%s",arr);
    int count1=0,count2=0,max1=0,max2=0;
    for(int i=0;arr[i]!='\0';i++)
    {

        if(arr[i]=='0')
        {
            count1++;
            count2=0;
        }
        else if(arr[i]=='1')
        {
           count2++;
            count1=0;
        }

       if(count1>max1) max1=count1;
       if(count2>max2) max2=count2;

    }

    if(max1>=7 || max2>=7)
    {
        printf("YES");
    }
    else
    {


        printf("NO\n");
    }
}
