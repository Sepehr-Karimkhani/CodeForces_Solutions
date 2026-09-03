#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, s, temp;
    string min = "", max = "";
    cin >> m >> s;
    temp = s;
    if (s == 0 && m == 1)
        cout << 0 << " " << 0 << endl;
    else if (1 > s || m * 9 < s)
        cout << -1 << " " << -1 << endl;
    else if (s > 0)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 9; j >= 0; j--)
            {
                if (s - j >= 0)
                {
                    s -= j;
                    max = max + char(j + 48);
                    min = char(j + 48) + min;
                    break;
                }
            }
        }
        if (min[0] == '0')
        {
            for (int i = 0; i < m; i++)
            {
                if (min[i] != '0')
                {
                    min[i] -= 1;
                    min[0] = '1';
                    break;
                }
            }
        }
        cout << min << " " << max << endl;
    }
}