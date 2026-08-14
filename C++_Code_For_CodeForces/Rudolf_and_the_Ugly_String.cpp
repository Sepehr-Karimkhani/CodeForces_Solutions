#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long testcase, s, rm;
    string str;
    vector<long long> ans;
    cin >> testcase;
    while (testcase--)
    {
        rm = 0;
        cin >> s;
        cin >> str;
        for (long long i = 0; i < s - 2; i++)
            if ((str[i] == 'm' && str[i + 1] == 'a' && str[i + 2] == 'p') || (str[i] == 'p' && str[i + 1] == 'i' && str[i + 2] == 'e'))
                ++rm;
        for (long long j = 0; j + 4 < str.length(); j++)
            if (str[j] == 'm' && str[j + 1] == 'a' && str[j + 2] == 'p' && str[j + 3] == 'i' && str[j + 4] == 'e')
                --rm;
        ans.push_back(rm);
    }
    for (long long i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}