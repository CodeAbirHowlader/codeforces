#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<int> digit;

    if (n < 0) n = abs(n);

    long long temp = n;
    while (temp > 0)
    {
        digit.push_back(temp % 10);
        temp = temp / 10;
    }
    reverse(digit.begin(), digit.end());

    if (digit.size() >= 2)
    {
        int last = digit[digit.size() - 1];
        int second_last = digit[digit.size() - 2];
        int maxdigit = (last > second_last) ? last : second_last;


        auto it = find(digit.begin(), digit.end(), maxdigit);
        if (it != digit.end())
        {
            digit.erase(it);
        }


        for (auto d : digit)
        {
            cout << d;
        }
        cout << endl;
    }
    else
    {
        cout << n << endl;
    }

    return 0;
}
