#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, s, count, max;
    string text, ale = "abcdefghijklmnopqrstuvwxyz";
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        max = 0;
        count = 0;
        text = "";
        cin >> s;
        vector<int> arr(s);
        vector<int> arr2(26, 0);
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
            for (int j = 0; j < 26; j++)
            {
                if (arr[i] == arr2[j])
                {
                    text += char('a' + j);
                    ++arr2[j];
                    break;
                }
            }
        }
        ans.push_back(text);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}