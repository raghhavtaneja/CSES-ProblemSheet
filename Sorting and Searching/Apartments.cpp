#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define toggle(x) x=!x
//VECTOR
#define vi std::vector<int>
#define vl std::vector<long long>
#define pb push_back

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

	ll n, m, k;
	cin >> n >> m >> k;
	vl a, b;
	for (ll i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.pb(x);
	}
	sort(a.begin(), a.end());
	for (ll i = 0; i < m; i++) {
		int x;
		cin >> x;
		b.pb(x);
	}
	sort(b.begin(), b.end());

	ll i = 0, j = 0;
//2-POINTER
	ll cnt = 0;
	while (i < n && j < m) {
		if (b[j] >= a[i] - k && b[j] <= a[i] + k) {
			cnt++;
			i++;
			j++;
		}
		else if (b[j] < a[i] - k) {
			j++;
		}
		else if (b[j] > a[i] + k) {
			i++;
		}
	}
	cout << cnt;

	return 0;
}

