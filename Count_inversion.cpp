#include <bits/stdc++.h>

using namespace std;
const int maxn = (int)1e5+10;
int BT[maxn];
int a[maxn];
int n;
void upd(int x,int v){
	for(; x <=n; x +=(x&-x))
		BT[x] +=v;
	}
int soma(int x){
	int ans = 0;
	for(;x>0;x-=(x&-x))
		ans+=BT[x];
	return ans;
	}


int main(){

	
	cin >> n;
  vector<int> aux;
	for(int i = 1; i<=n; i++){
		cin >> a[i];
		aux.push_back(a[i]);
	}
	sort(aux.begin(), aux.end());
	map<int, int> mp;
	int ind = 0;
	for(int i = 0; i<(int)aux.size(); i++){
		if(mp.find(aux[i]) == mp.end())
			mp[aux[i]] = ++ind;
		}
	long long ans = 0LL;
	for(int i = n; i>=1; i--){
		ans+=soma(mp[a[i]]-1);
		upd(mp[a[i]], 1);
	}
  cout <<ans <<endl;
	return 0;
}
