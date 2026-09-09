class Solution {
public:
    bool isSumEqual(string f, string s, string t) {
        string a = "";
        string b = "";
        string c = "";
        for(int i = 0 ; i < f.size() ; i++){
            a += (f[i] - 'a') + '0';
        }
        for(int i = 0 ; i < s.size() ; i++){
            b +=(s[i] - 'a') + '0';
        }
        for(int i = 0 ; i < t.size() ; i++){
            c += (t[i] - 'a') + '0';
        }
        int sum = stoi(a) + stoi(b);
        int x = stoi(c);
        return sum == x;
    }
};