#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n, k;
    vector<int> ans;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> test;
        vector<int> test2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % k == 0)
                test.push_back(0);
            else
                test.push_back(k - arr[i] % k);
            if (k == 4)
            {
                if (arr[i] % 2 == 0)
                    test2.push_back(0);
                else
                    test2.push_back(2 - arr[i] % 2);
            }
        }
        sort(test.begin(), test.end());
        sort(test2.begin(), test2.end());
        if (k == 4)
        {
            if (test[0] != 0)
            {
                int min2 = 0;
                min2 = test2[0] + test2[1];
                ans.push_back(test[0] < min2 ? test[0] : min2);
            }
            else
                ans.push_back(test[0]);
        }
        else
            ans.push_back(test[0]);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}