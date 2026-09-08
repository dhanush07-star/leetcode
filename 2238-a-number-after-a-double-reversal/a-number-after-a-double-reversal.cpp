class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0) return true;
        string temp = to_string(num);
        string s = to_string(num);
        int n = s.length();
        reverse(s.begin(),s.end());
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] > '0'){
                break;
            }else{
                s = s.substr(i+1,n-1);
            }
        }
        reverse(s.begin(),s.end());
        return s == temp;
    }
};