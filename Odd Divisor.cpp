#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        while(n%2==0)
        {
            n/=2;
        }
        if(n>1)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}
