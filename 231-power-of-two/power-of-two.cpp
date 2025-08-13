class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long a=0;
        if(n==1){
            return true;
        }else if(n<1){
            return false;
        }
        long long j=0;
        while(a<=n){
            a=pow(2,j);
            if(a==n){
                return true;
            }
            j++;
        }
        return false;
    }
};