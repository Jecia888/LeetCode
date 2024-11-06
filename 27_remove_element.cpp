#include <vector>          // For std::vector
#include <iterator>        // For std::make_move_iterator
#include <algorithm>       // For std::copy (if needed)



class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> temp; 
        int resultCount = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(nums.at(i) != val) {
                temp.push_back(nums.at(i)); 
                resultCount++; 
            } 
        }

        int tempCount = 0; 
        for(int i = 0; i <  nums.size(); i++){
            if(tempCount < temp.size()) {
                nums[i] = temp[tempCount]; 
            } else {
                nums[i] = NULL; 
            }
            tempCount++; 
        }

        return resultCount; 
    }
};