#include <vector>          // For std::vector
#include <iterator>        // For std::make_move_iterator
#include <algorithm>       // For std::copy (if needed)


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        std::vector<int> temp; 
        temp.push_back(nums.at(0)); 
        int last_temp_val = temp.at(0); 

        for(int i = 0; i < nums.size(); i++){
            if(last_temp_val < nums.at(i)) {
                temp.push_back(nums.at(i)); 
                last_temp_val = nums.at(i); 
            }
        }
    
        for(int i = 0; i < nums.size(); i++) {
            if(i < temp.size()) {
                nums[i] = temp[i]; 
            } else {
                nums[i] = NULL; 
            }
        }
        return temp.size(); 
    }
};