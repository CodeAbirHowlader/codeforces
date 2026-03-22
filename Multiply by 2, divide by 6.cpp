#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long countin=0;
        cin>>n;
        while(n%6==0)
        {
            n/=6;
            countin++;
        }
        while(n%3==0)
        {
            n/=3;
            countin+=2;
        }
        if(n==1)
        {
            cout<<countin<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

