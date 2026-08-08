#include <iostream>
#include <vector>
using namespace std;
void my_swap(int&, int&);
int main() {
	int testcase, a[3];
	vector<int> ans;
	cin >> testcase;
	while (testcase--) {
		cin >> a[0] >> a[1] >> a[2];
		if ((a[0] + a[1] + a[2]) % 2 == 1)
			ans.push_back(-1);
		else {
			if (a[0] > a[1])
				my_swap(a[0], a[1]);
			if (a[0] > a[2])
				my_swap(a[0], a[2]);
			if (a[1] > a[2])
				my_swap(a[1], a[2]);
			if (a[0] + a[1] >= a[2])
				ans.push_back((a[0] + a[1] + a[2]) / 2);
			else
				ans.push_back((a[0] + a[1]));
		}
	}
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
}
void my_swap(int& a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}