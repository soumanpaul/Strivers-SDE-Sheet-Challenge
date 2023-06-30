#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  unordered_map<int,int> map;

  int maxLength = 0;
  int prefixSum =0;
  for(int i=0; i<arr.size();i++){
    prefixSum+=arr[i];
    if(prefixSum==0) maxLength = i+1;
    if(map.find(prefixSum)!= map.end()){
      int j = map[prefixSum];
      maxLength=max(maxLength, i-j);
    }
    else map[prefixSum] = i;
  }
  return maxLength; 
}