#include<iostream>
using namespace std;
int main()
{
    long long n1,m1,n,m,a;
    cin>>n>>m>>a;
    if(n%a==0&&m%a!=0)
    {
        m1=(m/a)+1;
        n1=n/a;
        cout<<n1*m1<<endl;
    }
    else if(n%a!=0&&m%a==0)
    {
        m1=(m/a);
        n1=(n/a)+1;
        cout<<n1*m1<<endl;
    }
    else if(n%a==0&&m%a==0)
    {

        cout<<(n*m)/(a*a)<<endl;
    }
    else
    {
    n1=(n/a)+1;
    m1=(m/a)+1;
    cout<<n1*m1<<endl;
    }
}
