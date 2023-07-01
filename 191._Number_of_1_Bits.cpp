class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n){
            count += n & 1;
            n = n >> 1;
        }
        return count;
    }

    int countSetBits(int n){
    // base case
    if (n == 0)
        return 0;
    else
        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
    }

    //  Brian Kernighan’s Algorithm: 
    // if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit. 
    // If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count. 
    unsigned int countSetBits(int n){
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
    int countSetBits(int n){
        // base case
        if (n == 0)
            return 0;
        else
            return 1 + countSetBits(n & (n - 1));
    }

};