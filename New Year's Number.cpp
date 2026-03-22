
#include<iostream>
using namespace std;
int main()

{
    long long t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        long long n;
        cin>>n;
        int temp=n;

        if(n%2020==0)
        {
            cout<< "YES"<<endl;
        }
        else if(n%2021==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {


                n%=2020;

            int cou=temp/2020;
            if(n<=cou)
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
        }
    }








}

