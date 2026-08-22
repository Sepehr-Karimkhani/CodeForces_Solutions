#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n, sum1;
    string a, b;
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        sum1 = 0;
        cin >> n >> a >> b;
        for (int i = 0; i < a.size(); i += 2)
            if (a[i] == '1')
                ++sum1;
        for (int i = 0; i < b.size(); i += 2)
            if (b[i] == '1')
                --sum1;
        if (sum1)
            ans.push_back("NO");
        else
        {
            for (int i = 1; i < a.size(); i += 2)
                if (a[i] == '1')
                    ++sum1;
            for (int i = 1; i < b.size(); i += 2)
                if (b[i] == '1')
                    --sum1;
            if (sum1)
                ans.push_back("NO");
            else
                ans.push_back("YES");
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}