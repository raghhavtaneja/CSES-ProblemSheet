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

	ll n, x;
	cin >> n >> x;
	ll a[n];
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	ll i = 0, j = n - 1;
	ll cnt = 0;
	while (i < j) {
		ll c = a[i];
		ll d = a[j];
		if (c + d <= x) {
			cnt += 1;
			i++;
			j--;
		}
		else {
			cnt += 1;
			j--;
		}
		if (i == j) cnt++; // for 1 extra element if left
	}
	cout << cnt;

	return 0;
}

