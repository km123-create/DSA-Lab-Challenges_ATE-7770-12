class Solution { 
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // Start filling nums1 from the last index (m + n - 1)
        for (int i = m + n - 1; n > 0; --i) {
            // Check if nums1 still has elements left to compare
            if (m > 0 && nums1[m - 1] > nums2[n - 1]) {
                nums1[i] = nums1[m - 1]; // Place the larger element from nums1
                --m; // Move pointer for nums1
            } else {
                nums1[i] = nums2[n - 1]; // Place the element from nums2
                --n; // Move pointer for nums2
            }
        }
    }
};
