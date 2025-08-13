class Solution {
public:
    bool isPowerOfThree(int n) {
        long a=0;
        if(n==1){
            return true;
        }else if(n<3){
            return false;
        }
        long long j=0;
        while(a<=n){
            a=pow(3,j);
            if(a==n){
                return true;
            }
            j++;
        }
        return false;
    }
};