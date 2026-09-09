class Solution {
public:
    vector<int> findPeaks(vector<int>& a) {
       vector<int> peaks;
       int n = a.size();
       for(int i = 1 ; i < n-1 ; i++){
        if(a[i-1] < a[i] and a[i+1] < a[i]){
            peaks.push_back(i);
        }
       }
       return peaks; 
    }
};