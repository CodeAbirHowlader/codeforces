#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {
        int n; long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());
        int cur = 1, ans1 = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] <= k) cur++;
            else cur = 1;
            ans1 = max(ans1, cur);
        }


        sort(a.rbegin(), a.rend());
        int cur2 = 1, ans2 = 1;
        for (int i = 1; i < n; i++) {
            if (a[i-1] - a[i] <= k) cur2++;
            else cur2 = 1;
            ans2 = max(ans2, cur2);
        }

        int best = max(ans1, ans2);
        cout << n - best << "\n";
    }
}
