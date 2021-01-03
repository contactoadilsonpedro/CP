#include <bits/stdc++.h>
using namespace std;
string ans(string S, string T) 
{ 
    bool ok = false; 
    int M = T.size(); 
    int N = S.size(); 
    for (int i = 0; i <= M; i++) { 
        int pref_size = i; 
        int suf_size = M - i; 
        string prefix 
            = S.substr(0, pref_size); 
        string suffix 
            = S.substr(N - suf_size, 
                       suf_size); 
        if (prefix + suffix == T) { 
            ok = true; 
            break; 
        } 
    } 
  
    if (ok) 
        return "YES"; 
    return "NO"; 
} 

int main(){

    string cf = "CODEFORCES";
    string s; cin >>s;
    cout <<ans(s, cf) <<endl;

       

    return 0;
}
