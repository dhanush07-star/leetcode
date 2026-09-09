class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> freq(101,0);
        for(auto x : nums){
            freq[x]++;
        }
        int sum = 0;
        for(int i = 1 ; i < 101 ;i++){
            if(freq[i]>0 and freq[i]%k ==0){
                sum += i*freq[i];
            }
        }
        return sum;
    }
};