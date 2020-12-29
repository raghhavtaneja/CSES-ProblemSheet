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
	while (true) {
		cout << n << " ";
		if (n == 1) break;
		if (n & 1) n = n * 3 + 1;
		else n = n / 2;
 
	}
	return 0;
}
