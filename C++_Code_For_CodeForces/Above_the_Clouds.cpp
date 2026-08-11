#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int testcase, count;
    bool flag;
    string text;
    cin >> testcase;
    vector<string> ans;
    for (int l = 0; l < testcase; ++l) {
        flag = false;
        cin >> count >> text;
        for (int j = 1; j < count - 1; ++j) {
            if (text[0] == text[j] || text[text.length() - 1] == text[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            sort(text.begin() + 1, text.end() - 1);
            for (int k = 1; k < count - 1; ++k) {
                if (text[k] == text[k + 1]) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            ans.push_back("YES");
        else
            ans.push_back("NO");
    }
    for (int h = 0; h < testcase; ++h) {
        cout << ans[h] << endl;
    }
}

