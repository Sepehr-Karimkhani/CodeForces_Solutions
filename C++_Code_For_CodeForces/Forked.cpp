#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, a, b, x1, y1, x2, y2, ans;
    cin >> testcase;
    while (testcase--)
    {
        ans = 0;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        set<pair<int, int>> piece1, piece2;
        piece1.insert({x1 + a, y1 + b});
        piece1.insert({x1 + a, y1 - b});
        piece1.insert({x1 - a, y1 + b});
        piece1.insert({x1 - a, y1 - b});
        piece1.insert({x1 + b, y1 + a});
        piece1.insert({x1 + b, y1 - a});
        piece1.insert({x1 - b, y1 + a});
        piece1.insert({x1 - b, y1 - a});
        piece2.insert({x2 + a, y2 + b});
        piece2.insert({x2 + a, y2 - b});
        piece2.insert({x2 - a, y2 + b});
        piece2.insert({x2 - a, y2 - b});
        piece2.insert({x2 + b, y2 + a});
        piece2.insert({x2 + b, y2 - a});
        piece2.insert({x2 - b, y2 + a});
        piece2.insert({x2 - b, y2 - a});
        for (auto i : piece1)
            if (piece2.count(i))
                ++ans;
        cout << ans << endl;
    }
}