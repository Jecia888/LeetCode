#include <vector>          // For std::vector
#include <iterator>        // For std::make_move_iterator
#include <algorithm>       // For std::copy (if needed)

//O(m + n) solution 
//beats 100% time complexity 

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int counter1 = 0; 
        int counter2 = 0; 
        std::vector<int> temp; 

        // If nums2 is empty, there's nothing to merge
        if (n == 0) {
            return; 
        }

        // Main loop to merge until one of the arrays is exhausted
        while (counter1 < m && counter2 < n) {
            if (nums1.at(counter1) <= nums2.at(counter2)) {
                temp.push_back(nums1.at(counter1)); 
                counter1++; 
            } else {
                temp.push_back(nums2.at(counter2)); 
                counter2++; 
            }
        }

        // Insert remaining elements from nums1 if any
        if (counter1 < m) {
            temp.insert(temp.end(), std::make_move_iterator(nums1.begin() + counter1), std::make_move_iterator(nums1.begin() + m));
        }

        // Insert remaining elements from nums2 if any
        if (counter2 < n) {
            temp.insert(temp.end(), std::make_move_iterator(nums2.begin() + counter2), std::make_move_iterator(nums2.end()));
        }

        // Copy the merged result back to nums1
        nums1 = temp; 
    }
};
