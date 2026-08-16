#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n;
    string str;
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> str;
        for (int i = 0; i < n - 1; i++)
        {
            if ((str[i] == 'b' || str[i] == 'c' || str[i] == 'd') && (str[i + 1] == 'b' || str[i + 1] == 'c' || str[i + 1] == 'd'))
            {
                str.insert(i + 1, ".");
                ++n;
            }
            if (i < n - 2)
            {
                if ((str[i] == 'a' || str[i] == 'e') && (str[i + 1] == 'b' || str[i + 1] == 'c' || str[i + 1] == 'd') && (str[i + 2] == 'a' || str[i + 2] == 'e'))
                {
                    str.insert(i + 1, ".");
                    ++n;
                }
            }
        }
        ans.push_back(str);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}