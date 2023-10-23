#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string get(string s, int k) {
	while ((int) s.size() < k) {
		s = s + s;
	}
	while ((int) s.size() > k) {
		s.pop_back();
	}
	return s;
}

void test_case(int& tc) {
	int n, k;
	string s;
	cin >> n >> k >> s;
	string pref = "";
	pref += s[0];
	string mn = get(pref, k);
	for (int i = 1; i < n; i++) {
		if (s[i] > s[0]) {
			break;
		}
		pref += s[i];
		mn = min(mn, get(pref, k));
	}
	cout << mn << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
//	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
