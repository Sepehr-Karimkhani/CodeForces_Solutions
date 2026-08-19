#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long testcase, n, k, x, max, min;
    cin >> testcase;
    while (testcase--)
    {
        min = 0;
        max = 0;
        cin >> n >> k >> x;
        min = k * (k + 1) / 2;
        max = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
        cout << (min <= x && max >= x ? "Yes" : "No") << endl;
    }
}