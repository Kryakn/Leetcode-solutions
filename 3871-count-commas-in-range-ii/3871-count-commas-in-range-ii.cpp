class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999){
            return 0;
        }
        else if( n <= 999999){
            return (n-1000+1);
        }
        else if(n <= 999999999){
            long long less = n-1000+1;
            long long extra = n - 1000000 + 1;
            return (less + extra);
        }
        else if(n <= 999999999999){
            long long less = n-1000+1;
            long long extra = n-1000000 + 1;
            long long doubleExtra = n - 1000000000 + 1;
            return (less + extra + doubleExtra);
        }
        else if(n <= 999999999999999){
            long long less = n-1000+1;
            long long extra = n-1000000 + 1;
            long long doubleExtra = n - 1000000000 + 1;
            long long finalExtra = n - 1000000000000 + 1;
            return (less + extra + doubleExtra + finalExtra);
        }
        else{
            long long less = n-1000+1;
            long long extra = n-1000000 + 1;
            long long doubleExtra = n - 1000000000 + 1;
            long long finalExtra = n - 1000000000000 + 1;
            return (less + extra + doubleExtra + finalExtra) + 1;
        }
        return 0;
    }
};