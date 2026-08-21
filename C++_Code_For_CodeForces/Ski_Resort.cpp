#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long testcase, n, k, q, count, sum;
    cin >> testcase;
    while (testcase--)
    {
        sum = 0;
        count = 0;
        cin >> n >> k >> q;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= q)
            {
                ++count;
                if (count >= k)
                {
                    sum += count - k + 1;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << sum << endl;
    }
}