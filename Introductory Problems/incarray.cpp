#include<iostream>
#include<bits/stdc++.h>
#include<string>
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
 
	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	for (ll i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			ans += (a[i - 1] - a[i]);
			a[i] = a[i - 1];
		}
	}
	cout << ans;
 
 
	return 0;
}
