#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        vector<int> arr(n), arr2(n);
        vector<pair<int, int>> sum(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            sum[i].first = arr[i] + arr2[i];
            sum[i].second = i;
        }
        sort(sum.begin(), sum.end());
        for (int i = 0; i < n; i++)
        {
            cout << arr[sum[i].second] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr2[sum[i].second] << " ";
        }
        cout << endl;
    }
}