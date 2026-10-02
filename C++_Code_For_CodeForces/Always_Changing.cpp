#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, o, e, _c, ho, he;
    string txt;
    char temp;
    vector<int> ans;
    cin >> t;
    while (t--)
    {
        ho = 0;
        he = 1;
        o = 0;
        e = 0;
        _c = 0;
        vector<int> cnt;
        cin >> n >> txt;
        temp = txt[0];
        for (int i = 0; i < n; i++)
        {
            if (txt[i] == temp)
                ++_c;
            else
            {
                cnt.push_back(_c);
                _c = 1;
                temp = txt[i];
            }
        }
        cnt.push_back(_c);
        if (txt[0] == txt[txt.size() - 1])
            he++;
        else if (txt[0] != txt[txt.size() - 1])
            ho++;
        for (int i = 0; i < cnt.size(); i++)
        {
            if (cnt[i] > 1)
            {
                if (i % 2 == 0)
                    e += cnt[i] - 1;
                else if (i % 2 == 1)
                    o += cnt[i] - 1;
            }
        }
        if (abs(o - e) <= 1)
            ans.push_back(e + o);
        else if (o > e + 1)
        {
            if (he == 1)
            {
                if (o == e + 1 + he)
                    ans.push_back(o + e + he);
                else
                    ans.push_back(-1);
            }
            else
            {
                if (o == e + he)
                    ans.push_back(o + e + he - 1);
                else if (o == e + he + 1)
                    ans.push_back(o + e + he);
                else
                    ans.push_back(-1);
            }
        }
        else if (e > o + 1)
        {
            if (ho == 1)
                if (e == o + 1 + ho)
                    ans.push_back(e + o + ho);
                else
                    ans.push_back(-1);
            else
                ans.push_back(-1);
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}