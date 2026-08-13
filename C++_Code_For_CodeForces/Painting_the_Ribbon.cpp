#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, a, b, c;
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        if (c >= a - ceil(double(a) / b))
            ans.push_back("No");
        else
            ans.push_back("Yes");
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}