class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        if(nums.size() <=1) return {};
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
    
        
        for(int i=0; i< nums.size()-2 ;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1, k=nums.size()-1;
            
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    
                    int currJ = nums[j];
                    while(j <k && currJ==nums[j]) j++;
                    
                    int currK = nums[k];
                    while(j < k && currK==nums[k]) k--;
                        
                }else if(sum < 0){
                    j++;
                }else{
                    k--;
                }
            }
        }
        return ans;
    }
};