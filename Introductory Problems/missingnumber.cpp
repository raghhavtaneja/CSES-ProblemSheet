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
 
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
	}
	sort(a, a + n - 1);
	for (int i = 0; i < n; i++) {
		if (a[i] != i + 1) {
			cout << i + 1;
			break;
		}
	}
 
 
	return 0;
