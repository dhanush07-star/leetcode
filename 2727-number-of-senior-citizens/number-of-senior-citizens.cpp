class Solution {
public:
    int countSeniors(vector<string>& arr) {
        int count = 0;
        for(int i = 0 ; i < arr.size();i++){
            string str = arr[i].substr(11,2);
            int age = stoi(str);
            if(age > 60){
                count++;
            }
        }
        return count;
    }
};