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