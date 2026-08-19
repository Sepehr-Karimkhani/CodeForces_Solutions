#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long testcase, a, b, b2, n, sum;
    cin >> testcase;
    while (testcase--)
    {
        sum = 0;
        cin >> a >> b >> n;
        b2 = b;
        b = 1;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += min(arr[i], a);
        }
        sort(arr.begin(), arr.end());
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] + b > a)
            {
                sum -= 1;
                b = 1;
            }
        }
        sum += b2;
        cout << sum << endl;
    }
}