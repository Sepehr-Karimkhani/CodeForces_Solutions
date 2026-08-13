#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, s, count;
    string str;
    bool flag;
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        flag = false;
        count = 0;
        cin >> s >> str;
        for (int i = 0; i < s; i++)
        {
            if (str[i] == '1')
                count++;
            if (i < (s - 1))
            {
                if (str[i] == '1' && str[i + 1] == '1')
                    flag = true;
            }
        }
        if (count % 2 == 1 || (flag && count == 2))
            ans.push_back("NO");
        else
            ans.push_back("Yes");
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}