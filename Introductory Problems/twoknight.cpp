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

	ll n;
	cin >> n;
	cout << 0 << "\n";
	for (ll i = 2; i <= n; i++) {
		ll x = i * i;
		cout << ((x * (x - 1)) / 2 ) - (4 * (i - 1) * (i - 2)) << "\n";
	}

	return 0;
}

