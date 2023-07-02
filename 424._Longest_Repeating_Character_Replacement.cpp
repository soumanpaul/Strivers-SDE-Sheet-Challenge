class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0;
        unordered_map<string, int> map;
        int left=0, right=0;
        
        int lo= 1;
        int hi = s.length() + 1;

        while(lo + 1 < hi){
            int mid = lo + (hi - lo)/2;

            if(isValidString(s,mid, k)){
                lo = mid;
            }else {
                hi = mid;
            }
        }
    return lo;
    }

    bool isValidString(string s, int subStrLength, int k){
        vector<int> freqmap(26);
        int maxFrequency = 0;
        int start = 0;
        for(int end = 0; end < s.length; end+=1){
            
        }
    }
};