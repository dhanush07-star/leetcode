class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double avg = INT_MAX;
        int n = nums.size();
        int half = n/2;
        for(int i = 0 ; i < half ;i++){
            int mini = nums[i];
            int maxi = nums[n-i-1];
            double temp = ((mini+maxi)/2.0);
            avg = min(avg,temp);
        }
        return avg;
    }
};