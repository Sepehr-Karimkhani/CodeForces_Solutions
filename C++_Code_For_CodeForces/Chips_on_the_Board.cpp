#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long testcase, n, min1, min2, sum, sum2;
    vector<long long> ans;
    cin >> testcase;
    while (testcase--)
    {
        sum = 0;
        sum2 = 0;
        cin >> n;
        vector<long long> arr(n), arr2(n);
        cin >> arr[0];
        min1 = arr[0];
        sum += arr[0];
        for (long long i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < min1)
                min1 = arr[i];
            sum += arr[i];
        }
        cin >> arr2[0];
        min2 = arr2[0];
        sum2 += arr2[0];
        for (long long i = 1; i < n; i++)
        {
            cin >> arr2[i];
            if (arr2[i] < min2)
                min2 = arr2[i];
            sum2 += arr2[i];
        }
        ans.push_back(min(sum + n * min2, sum2 + n * min1));
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}