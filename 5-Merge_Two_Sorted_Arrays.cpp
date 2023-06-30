#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> newArray;
	int i=0, j=0;
	while(m && n){
          if (arr1[i] < arr2[j]) {
            newArray.push_back(arr1[i]);
            i++;m--;
          } else{
            newArray.push_back(arr2[j]);
          	j++; n--;
        	}

        }
		while(m){
			 newArray.push_back(arr1[i]);
            i++;m--;
		}
		while(n){
			newArray.push_back(arr2[j]);
          	j++; n--;
		}
		return newArray;
}