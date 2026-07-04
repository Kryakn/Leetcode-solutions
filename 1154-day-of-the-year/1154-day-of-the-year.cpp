class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        vector<int> mon = {31,28,31,30,31,30,31,31,30,31,30,31};

        if(year % 400 ==0 or (year%4==0 and year%100!=0)){
           mon[1] = 29; 
        }
        int d = 0;
        for(int i=0;i<month-1;i++){
            d=d+mon[i];
        }
        return d + day;
    }
};