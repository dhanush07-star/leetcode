class Solution {
public:
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.begin(),p.end(),greater<int>());
        sort(d.begin(),d.end(),greater<int>());
        int n = min(p.size(), d.size());
        double sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum +=(p[i]*(100-d[i]))/100.0;
        }
        for(int i = n; i < p.size(); i++) {
            sum += p[i];
        }
        return sum;
    }
};