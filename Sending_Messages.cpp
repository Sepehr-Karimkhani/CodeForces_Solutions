#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long testcase, n, f, a, b, sum;
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        sum = 0;
        cin >> n >> f >> a >> b;
        vector<int> arr(n + 1);
        arr[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if ((arr[i] - arr[i - 1]) * a > b)
                sum += b;
            else
                sum += (arr[i] - arr[i - 1]) * a;
        }
        ans.push_back(sum < f ? "Yes" : "No");
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}