class Solution {
public:
 int countSetBits(int n){
            if(n==0) return 0;
            else return countSetBits(n & (n-1)) + 1; 
        }
    vector<int> countBits(int n) {
        vector<int>ans;
            for(int i=0; i<=n; i++){
                ans.push_back(countSetBits(i));
            }
            return ans;
    }
};