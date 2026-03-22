#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;


        for (long long p=3;p<=2000000000; p=p*2+1) {
            if (n%p==0) {
                cout<<n/p<<endl;
                break;
            }
        }
    }
}
