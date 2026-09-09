class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = *max_element(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != largest and largest < nums[i]*2){
                return -1;
            }
        }
        int idx = 0;
        for(int i =0 ; i < nums.size() ;i++){
            if(nums[i] == largest){
                idx = i;
            }
        }
        return idx;
    }
};