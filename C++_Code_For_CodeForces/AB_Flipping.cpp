#include <bits/stdc++.h>
using namespace std;
int define(int a, int b);
int main()
{
    int testcase, n, count, count2;
    string str;
    vector<int> ans;
    cin >> testcase;
    while (testcase--)
    {
        count = -1;
        count2 = -1;
        cin >> n >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'A' && count == -1)
            {
                count = i;
            }
            if (str[n - i - 1] == 'B' && count2 == -1)
                count2 = n - i - 1;
        }
        if (count2 != 0 && count != -1)
            ans.push_back(define(count2, count));
        else
            ans.push_back(0);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}
int define(int a, int b)
{
    if (a - b < 0)
        return 0;
    else
        return a - b;
}