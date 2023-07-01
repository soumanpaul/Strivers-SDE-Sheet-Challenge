class Solution {
public:
    
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i< nums.size()-1; i++){
            if(nums[i+1]==nums[i]) return true;
        }
        return false;
    }

    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0; i< nums.size(); i++){
            s.insert(nums[i]);
        }
        return s.size() == nums.size() ? false : true;
    }
};