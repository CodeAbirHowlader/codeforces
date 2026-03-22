#include<stdio.h>
int main()
{
    char arr[105];
    scanf("%s",arr);

    int count1=0,count2=0;

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==0)
        {
            count1++;
        }
        else
        {
            break;
        }

        if(arr[i]==1)
        {
            count2++;
        }
        else
        {
            break;
        }
    }

    printf("%d",count1);

    if(count1>=7 || count2>=7)
    {
        printf("YES");
    }
    else
    {
        printf("NO\n");
    }
}
