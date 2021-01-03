class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        return lcs(word1, word2, n, m);
    }
    int lcs(string s, string t, int n, int m){
        if(!n || !m)
            return 0;
        else if(s[n-1] == t[m-1])
            return 1 + lcs(s, t, n-1, m-1);
        return max(lcs(s, t, n, m-1), lcs(s, t, n-1, m));
    }
};
