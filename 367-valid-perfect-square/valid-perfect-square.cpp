class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num>0){
            int a= sqrt(num);

            if(a*a==num) return true;
        }
        
        return false;
    }
};