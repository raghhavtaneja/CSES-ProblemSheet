#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define int long long int
#define toggle(x) x=!x
#define inf 1e9
//VECTOR
#define vi std::vector<int>
#define vc std::vector<char>
#define vl std::vector<long long>
#define pb push_back
const int M = 1000000007;
//PAIR
#define pi pair<int,int>
#define mp make_pair


#define mem(a,b) memset((a),(b),sizeof(a))

/*** Sorts ***/
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())

void towerOfHanoi(int n, int src, int help, int dest) {
    //base
    if (n == 0) {
        return ;
    }
    towerOfHanoi(n - 1, src, dest, help);
    cout << src << " " << dest << endl;
    towerOfHanoi(n - 1, help, src, dest);
}
void solve() {
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    towerOfHanoi(n, 1, 2, 3);

}

int32_t main() {
#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("op.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();

    }

    return 0;
}
