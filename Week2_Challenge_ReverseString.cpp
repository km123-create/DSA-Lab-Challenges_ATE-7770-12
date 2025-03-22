#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int left = 0, right = s.size() - 1; // Two pointers: one at the start, one at the end
        
        // Swap characters until the pointers meet in the middle
        while (left < right) {
            std::swap(s[left], s[right]); // Swap the two characters
            left++;  // Move left pointer forward
            right--; // Move right pointer backward
        }
    }
};
