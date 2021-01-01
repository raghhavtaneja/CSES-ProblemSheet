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

	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		int sum = a + b;
		if (sum % 3 == 0 && 2 * a >= b && 2 * b >= a) cout << "YES\n";
		else cout << "NO\n";
	}


	return 0;
}

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

	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		int sum = a + b;
		if (sum % 3 == 0 && 2 * a >= b && 2 * b >= a) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}

