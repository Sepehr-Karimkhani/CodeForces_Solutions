#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n, k, sum;
    string str;
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        sum = 0;
        vector<int> cnt(26, 0);
        cin >> n >> k >> str;
        for (int i = 0; i < n; i++)
        {
            int num = str[i] - 'a';
            cnt[num]++;
        }
        for (int i = 0; i < 26; i++)
            if (cnt[i] % 2 == 1)
                ++sum;
        if (sum - 1 <= k)
            ans.push_back("Yes");
        else
            ans.push_back("No");
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}