/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
 
    let sum=0;
    let max = Math.pow(2,31)-1;
    let min = -Math.pow(2,31);
    while(x!==0){
        if(sum>Math.trunc(max/10) || sum<Math.trunc(min/10)){
            return 0;
        }
        sum=sum*10+(x%10);
        x=Math.trunc(x/10);
    }
    return sum;
};