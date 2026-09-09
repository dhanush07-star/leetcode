class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini = INT_MAX;
        for(int i = 1 ; i < arr.size();i++){
            int diff = abs(arr[i]-arr[i-1]);
            mini = min(diff,mini);
        }
        vector<vector<int>> ans;
        for(int i = 1 ; i < arr.size() ;i++){
            int diff = abs(arr[i]-arr[i-1]);
            if(diff == mini){
                ans.push_back({arr[i-1],arr[i]});
            }

        }
        return ans;
    }
};