#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define toggle(x) x=!x
const int M = 1000000007;


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
	ll ans = 1;
	for (ll i = 0; i < n; i++) {
		ans = (ans * 2) % M;
	}
	cout << ans;

	return 0;
}

