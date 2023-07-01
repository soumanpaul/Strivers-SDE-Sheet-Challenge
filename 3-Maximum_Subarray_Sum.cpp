#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n){
    long long int maxSum = arr[0];
    long long int sum = arr[0];

    for(int i=1; i< n;i++){
        sum = max(sum+arr[i], (long long)arr[i]);
        maxSum = max(sum,maxSum);
    }
    return maxSum < 0 ? 0 : maxSum;
}

// subarraySum = max(arr[I], subarraySum+arr[I]), largest = max(subarraySum,largest)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum =nums[0];
        int subarraySum = nums[0];
        
        for(int i=1; i< nums.size(); i++){
            subarraySum =max(subarraySum + nums[i], nums[i]);    // Kadane's Algorithm
            maxSum=max(maxSum,subarraySum);
        }
    return maxSum;
    }
};