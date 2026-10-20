class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.length();
        int nLen = needle.length();
        
        // Loop through all possible starting positions in haystack
        for (int i = 0; i <= hLen - nLen; i++) {
            int j = 0;
            
            // Check if characters match starting from position i
            while (j < nLen && haystack[i + j] == needle[j]) {
                j++;
            }
            
            // If the whole needle matches, return the start index i
            if (j == nLen) {
                return i;
            }
        }
        
        // Return -1 if needle is not found
        return -1;
    }
};
