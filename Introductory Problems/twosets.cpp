#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define toggle(x) x=!x
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

	int n;
	cin >> n;

	;
	if (n % 4 == 0) {
		cout << "YES\n";
		std::vector<int> v1, v2;
		for (int i = 1; i <= n / 4; i++) {
			v1.pb(i);
		}
		for (int i = n / 4 + 1; i <= (n - (n / 4)); i++) {
			v2.pb(i);
		}
		for (int i = 1 + (n - n / 4); i <= n; i++) {
			v1.pb(i);
		}
		cout << v1.size() << "\n";
		for (auto it : v1) cout << it << " ";
		cout << endl;
		cout << v2.size() << "\n";
		for (auto it : v2) cout << it << " ";

	}
	else if (n % 4 == 3) {
		cout << "YES\n";
		std::vector<int> v, v1, v2;
		v1.pb(1);
		v1.pb(2);
		v2.pb(3);
		for (int i = 4; i <= n; i++) {
			v.pb(i);
		}
		for (int i = 0; i < (n - 3) / 4; i++) {
			v1.pb(v[i]);
			v1.pb(v[v.size() - i - 1]);
		}
		for (int i = 4 + (n - 3) / 4; i <= n - (n - 3) / 4; i++) {
			v2.pb(i);
		}
		cout << v1.size() << "\n";
		for (auto it : v1) cout << it << " ";
		cout << endl;
		cout << v2.size() << "\n";
		for (auto it : v2) cout << it << " ";

	}
	else {
		cout << "NO";
	}



	return 0;
}

