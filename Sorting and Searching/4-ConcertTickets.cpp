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

	ll n, m;
	cin >> n >> m;
	ll a[n], b[m];
	multiset<int> s;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		s.insert(a[i]);

	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		auto it = s.lower_bound(b[i] + 1);
		if (it == s.begin()) cout << -1 << "\n";
		else {
			it--;
			cout << *it << "\n";
			s.erase(it);
		}
	}

	return 0;
}
