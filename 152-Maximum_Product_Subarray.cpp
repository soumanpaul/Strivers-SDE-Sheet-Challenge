class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int maxProduct = nums[0];
        int minProduct = nums[0];


        for(int i=1; i< nums.size(); i++){
            int temp = max({maxProduct*nums[i],nums[i]*minProduct, nums[i]});
            minProduct = min({maxProduct*nums[i],nums[i]*minProduct, nums[i]});
            maxProduct = temp;
            ans = max(maxProduct, ans);
        }
        return ans;
    }
};