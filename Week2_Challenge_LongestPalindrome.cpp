class Solution {
public:
    int longestPalindrome(std::string s) {
        std::unordered_map<char, int> freq; // Stores frequency of each character
        int length = 0;
        bool hasOdd = false; // Flag to check if there is an odd frequency character

        // Count the frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Iterate through the frequency map
        for (auto& pair : freq) {
            if (pair.second % 2 == 0) {
                length += pair.second; // Add even counts directly
            } else {
                length += pair.second - 1; // Add the largest even part
                hasOdd = true; // At least one odd count exists
            }
        }

        // If there's at least one odd count, we can place one character in the center
        if (hasOdd) {
            length += 1;
        }

        return length;
    }
};
