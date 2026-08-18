#include <bits/stdc++.h>
using namespace std;
void sort(int &a, int &b, int &c);
void mySwap(int &a, int &b);
int main()
{
    int testcase, a, b, c, count;
    vector<string> ans;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        sort(a, b, c);
        if (b % a == 0 && c % a == 0)
        {
            count = (b / a) + (c / a) - 2;
            if (count <= 3)
                ans.push_back("Yes");
            else
                ans.push_back("No");
        }
        else
            ans.push_back("No");
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}
void mySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort(int &a, int &b, int &c)
{
    if (a > b)
        mySwap(a, b);
    if (a > c)
        mySwap(a, c);
    if (b > c)
        mySwap(b, c);
}