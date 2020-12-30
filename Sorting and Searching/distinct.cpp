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

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] != a[i + 1]) cnt++;
	}
	cout << cnt + 1;
	return 0;
}

