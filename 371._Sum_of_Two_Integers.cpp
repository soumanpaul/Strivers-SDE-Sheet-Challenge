class Solution {
public:
    int getSum(int a, int b) {
       unsigned carry =0;
       int ans =0;
       while(b!=0){
           carry = a&b;
           a = a^b;
           b= carry << 1;
       } 
       return a;
    }

    int Add(int x, int y){
        if (y == 0)
            return x;
        else
            return Add( x ^ y,(unsigned) (x & y) << 1);
    }
};