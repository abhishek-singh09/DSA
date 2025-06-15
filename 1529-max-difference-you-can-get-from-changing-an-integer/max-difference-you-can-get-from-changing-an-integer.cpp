class Solution {
public:
    int maxDiff(int num) {

        string str = to_string(num);
        string smax = str;
        string smin = str;

        char cm1='\0';
        for(int i=0;i<smax.size();i++){
            if(smax[i]!='9'){
                cm1=smax[i];
                break;
            }
        }

        for(int i=0;i<str.size();i++){
            if(smax[i]==cm1) smax[i]='9';
        }

        char cm2='\0';
        int ind=0;
        for(int i=0;i<smin.size();i++){
            if(smin[i]!='1' && smin[i]!='0'){
                cm2=smin[i];
                ind=i;
                break;
            }
        }

        if(ind==0){
            for(int i=0;i<str.size();i++){
                if(smin[i]==cm2) smin[i]='1';
            }  
        }else{
            for(int i=1;i<smin.size();i++){
                if(smin[i]==cm2) smin[i]='0';
            }
        }

        

        int ans1= stoi(smax);
        int ans2= stoi(smin);
        return abs(ans1-ans2);
        
    }
};