class Solution {
public:
    int findClosest(int x, int y, int z) {
        // int a=0;
        // int b=0;
        // if(x>z){
        //     while(x>=z){
        //         a++;
        //         x--;
        //     }
        // }else if(x<z){
        //     while(x<=z){
        //         a++;
        //         x++;
        //     }
        // }

        // if(y>z){
        //     while(y>=z){
        //         b++;
        //         y--;
        //     }
        // }else if(y<z){
        //     while(y<=z){
        //         b++;
        //         y++;
        //     }
        // }
        
        // if(a==b) return 0;
        // if(a<b) return 1;

        // return 2;


        if(abs(z-x)<abs(z-y)){
            return 1;
        }else if(abs(y-z)<abs(z-x)){
            return 2;
        }
        return 0;

        
        
    }
};