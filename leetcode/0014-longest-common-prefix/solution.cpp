class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Guard clause: if the input is empty, return an empty string
        if (strs.empty()) return "";
        
        // Loop through each character of the first string
        for (int i = 0; i < strs[0].length(); ++i) {
            char currentChar = strs[0][i];
            
            // Compare currentChar with the character at index i of all other strings
            for (int j = 1; j < strs.size(); ++j) {
                // If index i exceeds the bounds of the current string, or
                // the characters do not match, return the prefix found so far
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        // If no mismatches are found, the entire first string is the common prefix
        return strs[0];
    }
};
