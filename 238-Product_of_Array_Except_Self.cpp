class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int product =1;
        
        vector<int> ans;
        vector<int> left, right;
        
        left.push_back(1);
        right.push_back(1);
        
        for(int i=1; i< nums.size(); i++){
            left.push_back(left[i-1]*nums[i-1]); 
        }

        for(int i=nums.size(), j=1; i > 0; i--, j++){
            right.push_back(right[j-1]*nums[i-1]); 
        }
        
        for(int i=0, j=right.size()-2; i< nums.size(); i++, j--){
            ans.push_back(left[i]*right[j]);
        }
        
        return ans;
    }
};