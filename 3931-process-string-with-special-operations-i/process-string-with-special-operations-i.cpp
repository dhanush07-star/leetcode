class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for(auto x : s){
            if(x == '*'){
                int n = ans.length();
                if(n>0){
                    ans = ans.substr(0,n-1);
                }
            }else if(x == '#'){
                ans += ans;
            }else if(x == '%'){
                reverse(ans.begin(),ans.end());
            }else{
                ans += x;
            }
        }
        return ans;
    }
};