class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);
        string str = word.substr(0,idx+1);
        string rem = word.substr(idx+1);
        reverse(str.begin(),str.end());
        string ans = "";
        ans +=str;
        ans += rem;
        return ans;
    }
};