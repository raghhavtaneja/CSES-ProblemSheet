#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
typedef long int li;
 
#define toggle(x) x=!x
const int M = 1e9 + 7;
 
 
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("in1.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	string s;
	cin >> s;
	int l = s.length();
	int cnt = 0;
	int mx = INT_MIN;
	if (l == 1) {cout << 1; return 0;}
	for (int i = 0; i < l - 1; i++) {
		if (s[i] == s[i + 1]) {
			cnt++;
		}
		else {
			cnt = 0;
		}
 
		if (cnt >= mx) {
			mx = cnt;
		}
	}
	cout << mx + 1;
 
 
	return 0;
}
