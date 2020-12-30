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

	if (n == 1) cout << 1;
	else if (n == 2 || n == 3) cout << "NO SOLUTION";
	else if (n == 4) cout << "2 4 1 3";
	else {
		for (int i = 1; i <= n; i += 2) {
			cout << i << " ";
		}
		for (int i = 2; i <= n; i += 2) {
			cout << i << " ";
		}
	}


	return 0;
}

