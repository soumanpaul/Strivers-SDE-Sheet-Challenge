class Solution {
public:
    string longestPalindrome(string s) {
        for(int length = s.length(); length>0; length--){
            for(int start = 0; start<= s.length()-length;start++){
                if(check(start, start+length, s)){
                    return s.substr(start, start+length);
                }
            }
        }
        return "";
    }
    
    bool check(int i, int j, string s){
        int left = i;
        int right = j - i;

        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

};