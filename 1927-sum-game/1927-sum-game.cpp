class Solution {
public:
    bool sumGame(string num) {
        int leftsum=0;
        int rightsum=0;
        int leftq=0;
        int rightq=0;
        for(int i=0;i<num.size()/2;i++){
            if(num[i]=='?'){
                leftq++;
            }
            else{
                leftsum+=num[i] - '0';
            }
        }
        for(int j=num.size()/2;j<num.size();j++){
            if(num[j]=='?'){
                rightq++;
            }
            else{
                rightsum+=num[j] - '0';
            }
        }
        if(leftsum==rightsum){
            return leftq!=rightq;
        }
        bool win = (leftsum > rightsum and rightq > leftq) or (leftsum < rightsum and leftq > rightq);

        if(!win){
            return true;
        }
        int diffsum=abs(leftsum-rightsum);
        int diffq=abs(leftq-rightq);
        if(diffq%2==1){
            return true;
        }
        return (diffq/2)*9!=diffsum;
    }
};