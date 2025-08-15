class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }else if(n<4){
            return false;
        }

        long long i=0;
        long long a=0;
        while(a<=n){
            if(a==n){
                return true;
            }
            a=pow(4,i);
            i++;
        }
        return false;
        
    }
};