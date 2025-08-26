class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int j=0;
        long long area=INT_MIN;
        long long mx=INT_MIN;
        for(int i=0;i<dimensions.size();i++){
            long long a=dimensions[i][0];
            long long b=dimensions[i][1];
            int a1=a*b;
            long long temp=(a*a)+(b*b);
            if(temp>=mx){
                if(temp==mx){
                    if(a1>area){
                        area=a1;
                        j=i;
                    }

                }else{
                    mx=temp;
                    area=a1;
                    j=i;
                }
            }
        }
        return dimensions[j][0]*dimensions[j][1];   
    }
};