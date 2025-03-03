class Solution {
public:
    int arrangeCoins(int n) {
        int a=1;
        int sub=1;
        int count=0;
        while(n>0){
            if(a==sub){
                count++;
            }
            a++;
            n-=sub;
            sub++;
            if(n<sub){
                break;
            }
        }
        return count;
    }
};