#include <bits/stdc++.h>
using namespace std;
long long power(long long a, long long b);
int main()
{
    long long testcase, a, b, x, mymin, temp1, temp2;
    vector<long long> ans;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> x;
        temp1 = a;
        temp2 = b;
        mymin = abs(a - b);
        for (long long i = 0; i <= 30; i++)
        {
            temp1 = a;
            temp1 /= pow(x, i);
            for (long long j = 0; j <= 30; j++)
            {
                temp2 = b;
                temp2 /= pow(x, j);
                if (mymin > abs(temp1 - temp2) + i + j)
                    mymin = abs(temp1 - temp2) + i + j;
            }
        }
        ans.push_back(mymin);
    }
    for (long long i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}
// long long power(long long a, long long b)
// {
//     long long answer = 1;
//     for (long long i = 1; i <= b; i++)
//         answer *= a;
//     return answer;
// }