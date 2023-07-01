// 1- take the middle and compare with target, if matches return.
// 2- if middle is bigger than left side, it means left is sorted
// 2a- if [left] < target < [middle] then do recursion with left, middle - 1 (right)
// 2b- left side is sorted, but target not in here, search on right side middle + 1 (left), right
// 3- if middle is less than right side, it means right is sorted
// 3a- if [middle] < target < [right] then do recursion with middle + 1 (left), right
// 3b- right side is sorted, but target not in here, search on left side left, middle -1 (right)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() -1;

        if(nums.size() ==1 & nums[0] == target) return 0;
        

        while(left <= right){
            int mid = left + (right -left)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] >= nums[left]){
                if(nums[mid] > target && target >= nums[left]) right = mid -1;
                else left = mid + 1;
            }
            else {
                if(target <= nums[right] && target > nums[mid])
                    left = mid + 1;
                else right = mid - 1;}
        }
        return -1;
    }
};

