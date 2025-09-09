class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        int a=-n/2;
        if(n%2!=0){
            for(int i=0;i<n;i++){
                arr[i]=a;
                a+=1;
            }
        }else{
            for(int i=0;i<n;i++){
                if(a==0){
                    a+=1;
                }
                arr[i]=a;
                a+=1;
            }
        }
        return arr;
    }
};