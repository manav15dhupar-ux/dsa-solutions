class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stk;
        
        for (char c : s) {
            // If it's an opening bracket, push its expected closing counterpart
            if (c == '(') {
                stk.push(')');
            } else if (c == '{') {
                stk.push('}');
            } else if (c == '[') {
                stk.push(']');
            } 
            // If it's a closing bracket, check if it matches the expected top element
            else {
                if (stk.empty() || stk.top() != c) {
                    return false;
                }
                stk.pop(); // Match found, remove from stack
            }
        }
        
        // If the stack is empty, all brackets were correctly matched
        return stk.empty();
    }
};
