#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   vector<int> pair;
   unordered_map<int,int> map;
   
   // sort(arr.begin(),arr.end());

   for(int i = 0; i < arr.size(); i++){
      int rem = s-arr[i];
      if(map.find(rem)!=map.end()){
         int count = map[rem];
         for(int j=0; j<count;j++){
            pair.push_back(rem);
            pair.push_back(arr[i]);
            sort(pair.begin(),pair.end());
            ans.push_back(pair);
            pair.clear();
         }
      }
      map[arr[i]]++;
   }
   sort(ans.begin(), ans.end());
   
   return ans;
}
