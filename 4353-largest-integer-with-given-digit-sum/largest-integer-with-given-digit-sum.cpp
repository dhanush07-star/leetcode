class Solution {
public:
    int largestInteger(int n, int s) {
        string str = "";
        while(n--){
            if(s>9){
                str+="9";
                s = s-9;
            }else{
                str+= to_string(s);
                s=0;
            }
        }
        if(s > 0){
            return -1;
        }
        return stoi(str);
    }
};