class Solution {
public:
    int findGCD(vector<int>& nums) {
        int g = *max_element(nums.begin(),nums.end());
        int s = *min_element(nums.begin(),nums.end());
        return __gcd(g,s);
    }
};