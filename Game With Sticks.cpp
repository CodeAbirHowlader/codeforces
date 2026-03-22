#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==n)
    {
    if((n*m)%2==0)
    {
       cout<< "Malvika"<<endl;
    }
    else
    {
        cout<< "Akshat"<<endl;
    }
    }
        else if (n > m) {

        cout <<((m % 2 == 0)?"Malvika":"Akshat");
    } else {

        cout <<((n % 2 == 0)?"Malvika":"Akshat");
    }

}
