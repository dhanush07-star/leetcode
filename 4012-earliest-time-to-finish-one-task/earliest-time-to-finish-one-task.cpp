class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end());
        int time = INT_MAX;
        for(int i = 0 ; i < tasks.size();i++){
            int t = tasks[i][0] + tasks[i][1];
            time = min(time,t);
        }
        return time;
    }
};