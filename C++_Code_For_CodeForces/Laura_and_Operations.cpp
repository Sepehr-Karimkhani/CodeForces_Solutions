#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        a = a % 2;
        b = b % 2;
        c = c % 2;
        if (a == b && b == c)
            cout << 1 << " " << 1 << " " << 1 << endl;
        else if (a == b)
            cout << 0 << " " << 0 << " " << 1 << endl;
        else if (b == c)
            cout << 1 << " " << 0 << " " << 0 << endl;
        else
            cout << 0 << " " << 1 << " " << 0 << endl;
    }
}