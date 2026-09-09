class Solution {
public:
    string restoreString(string s, vector<int>& idx) {
        int n = s.length();
        vector<char> ch(n);
        for(int i = 0; i < idx.size();i++){
            ch[idx[i]] = s[i];
        }
        string str(ch.begin(),ch.end());
        return str;
    }
};