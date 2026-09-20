class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> range;
        int max_digit_range = INT_MIN;
        for(auto n : nums){
            string s = to_string(n);
            int mini = *min_element(s.begin(), s.end()) - '0';
            int maxi = *max_element(s.begin(), s.end()) - '0';
            int d = maxi - mini;
            range.push_back(d);
            max_digit_range = max(max_digit_range,d);
        }
        int sum = 0;
        for(int i = 0 ; i < range.size();i++){
            if(range[i]>=max_digit_range){
                sum+=nums[i];
            }
        }
        return sum;
    }
};