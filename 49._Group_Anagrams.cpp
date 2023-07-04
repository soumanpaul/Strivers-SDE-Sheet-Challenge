class Solution {
public:
    string sortStr(string s){
        sort(s.begin(), s.end());
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagram;
        unordered_map<string, int> map;
        int j=0;
        for(int i=0; i<strs.size(); i++){

            string str = sortStr(strs[i]);
            if(map[str]){
                anagram[map[str]-1].push_back(strs[i]);
            }else {
                anagram.push_back({});
                anagram[j].push_back(strs[i]);
                map[str] = j+1;
                j++;
            }
        }
        return anagram;
    }
};