class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int count =0;
        unordered_set<string> bannedSet(bannedWords.begin(), bannedWords.end());
        for(auto x : message){
            if(bannedSet.find(x) != bannedSet.end()){
                count++;
                if (count == 2) {
                    return true;
                }
            }
        }
        return false;
    }
};