class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int len = s.length();
        int i =0;
        while(len--){
            if(!stack.empty()){
                char ch = stack.top();
                if(ch == '(' && s[i] == ')') stack.pop();
                else if(ch == '{' && s[i] == '}') stack.pop();
                else if(ch == '[' && s[i] == ']') stack.pop();
                else stack.push(s[i]);
            }else stack.push(s[i]);
            i++;
        }
        if(stack.empty()) return true;
        return false;
    }
};