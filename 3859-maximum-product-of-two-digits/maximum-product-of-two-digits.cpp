class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int max1 = 0;
        int max2 = 0;
        for(auto x : s){
            int temp = x -'0';
            if(temp > max1){
                max2 = max1;
                max1 = temp;
            }else if(temp > max2){
                max2 = temp;
            }
        }
        return max2*max1;
    }
};