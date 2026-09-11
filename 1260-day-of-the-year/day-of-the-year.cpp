class Solution {
public:
    int dayOfYear(string date) {
        int month = stoi(date.substr(5,2))-1;
        int year = stoi(date.substr(0, 4));
        int day = stoi(date.substr(8,2));
        vector<int> monthdays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            monthdays[1] = 29;
        }
        int ans = 0;
        for(int i = 0 ; i < month;i++){
            ans += monthdays[i];
        }
        return ans+day;

    }
};