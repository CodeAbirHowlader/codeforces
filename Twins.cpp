#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n,coin,sum=0,sum2=0,countin=0;
    cin>>n;
    vector<int>coins;
    for(int i=0;i<n;i++)
    {
        cin>>coin;
        coins.push_back(coin);
        sum+=coin;
    }
    sum=sum/2;
    sort(coins.rbegin(),coins.rend());
    for(int i=0;i<coins.size();i++)
    {
        sum2+=coins[i];
        countin++;
        if(sum<sum2)
        {
            cout<<countin<<endl;
            break;
        }
    }
}
