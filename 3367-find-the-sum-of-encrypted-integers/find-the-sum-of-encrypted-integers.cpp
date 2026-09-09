class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for(auto n : nums){
            int max_digit = 0;
            int length = 0;
            int p = 0;
            while(n != 0){
                int rem = n%10;
                max_digit = max(max_digit,rem);
                length++;
                p =p*10;
                p=p+1;
                n = n / 10;
            }
            ans += max_digit*p;
        } 
        return ans;
    }
};