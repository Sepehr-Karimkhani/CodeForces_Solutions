#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, count, u;
    string txt;
    vector<string> ans;
    cin >> tc;
    while (tc--)
    {
        u = 0;
        cin >> count;
        cin >> txt;
        for (int i = 0; i < count; i++)
            if (txt[i] == 'U')
                ++u;
        if (u % 2 == 1)
            ans.push_back("YES");
        else
            ans.push_back("NO");
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";
}