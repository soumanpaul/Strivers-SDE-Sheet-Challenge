// The key idea is that for a bit that is situated at the index i, after the reversion, 
// its position should be 31-i (note: the index starts from zer

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0, power = 31;
        while(n != 0){
            ret += (n & 1) << power;
            n = n >> 1;
            power -= 1;
        }
        return ret;
    }
};