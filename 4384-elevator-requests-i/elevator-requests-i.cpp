class Solution {
public:
    int elevatorRequests(int n, vector<int>& a) {
        int time = 0;
        int currfloor = 0;
        for(int i = 0; i < a.size() ;i++){
            time += abs(a[i] - currfloor);
            currfloor = a[i];
        }
        return time;
    }
};