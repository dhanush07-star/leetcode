class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& cap) {
        int totalcap = 0;
        for(auto a : apple){
            totalcap += a;
        }

        sort(cap.begin(),cap.end(),greater<int>());
        int count = 0;
        int sum = 0;
        for(auto x : cap){
            sum += x;
            count++;
            if(sum >= totalcap){
                return count;
            }
        }
        return -1;
    }
};