class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t ? true :false;
    }
    bool isAnagram(string s, string t) {
        int ch[256] = {0};
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2) return false;

        for(int i=0; i< l1; i++){
            ch[s[i]]++;
            ch[t[i]]--;
        }
        for(int i=0; i<256; i++){
            if(ch[i]) return false;
        }
        return true;
    }
};