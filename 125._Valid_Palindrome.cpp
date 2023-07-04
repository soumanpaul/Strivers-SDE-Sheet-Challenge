class Solution {
public:
    bool isPalindrome(string s) {
        int j=0, i=0;
       for (int i = 0, j = s.size() - 1; i < j; i++, j--){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
        }
        return true;
    }
};