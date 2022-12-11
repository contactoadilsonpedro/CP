//https://cses.fi/problemset/task/1652/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long mod = 1000000007;
ll gcd (ll a, ll b) {return b==0 ? a : gcd(b, a%b);}

#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int di4[] = {-1, 0, 1,  0};
const int dj4[] = { 0, 1, 0, -1};
const int di8[] = {-1, 0, 1,  0, -1, 1,-1,1};
const int dj8[] = { 0, 1, 0, -1, -1, 1,1,-1};
int main()
{
#ifdef LOCAL
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
	fastio
 	int tc = 1;
 	//cin >> tc;
	while(tc--){
		int n, q;
		cin >> n >> q;
		int pre[n+1][n+1], fo[n+1][n+1];
		memset(fo, 0, sizeof(fo));
		memset(pre, 0, sizeof(pre));
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=n; j++){
				char c;cin >> c;
				fo[i][j]+=c == '*';
			}
		}
		for(int i = 1; i<=n; i++)
			for(int j = 1; j<=n; j++)
				pre[i][j] = fo[i][j] + pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1];
		while(q--){
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			int ans = pre[x2][y2] - pre[x1-1][y2] - pre[x2][y1-1] + pre[x1-1][y1-1];
			cout << ans <<endl;
		}
	}
 	return 0;
}

