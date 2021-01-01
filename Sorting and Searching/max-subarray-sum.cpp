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

	//Kadanes Algorithm
	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll sum = 0, mx = INT_MIN;
	for (ll i = 0; i < n; i++) {
		sum += a[i];
		if (sum > mx) mx = sum;
		if (sum < 0) sum = 0;
	}
	cout << mx;


	return 0;
}

