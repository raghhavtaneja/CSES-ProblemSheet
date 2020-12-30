#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

	ll t;
	cin >> t;
	while (t--) {
		ll y, x;
		cin >> y >> x;
		ll mx = max(y, x);
		if (mx & 1) {
			if (mx == x) {
				cout << (mx - 1)*(mx - 1) + 2 * mx - y << "\n";
			}
			else {
				cout << (mx - 1)*(mx - 1) + x << "\n";
			}
		}
		else {
			if (mx == y) {
				cout << (mx - 1)*(mx - 1) + 2 * mx - x << "\n";
			}
			else {
				cout << (mx - 1)*(mx - 1) + y << "\n";
			}
		}
	}


	return 0;
}

