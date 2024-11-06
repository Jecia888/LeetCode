#include <vector>          // For std::vector
#include <iterator>        // For std::make_move_iterator
#include <algorithm>       // For std::copy (if needed)


class Solution {
public:
    int majorityElement(std::vector<int>& nums) {

       sort(nums.begin(), nums.end()); 

       int count = 0; 
       int maxCount = 0; 
       int maxCountIndx = 0; 
       int tempLast = nums.at(0);

       for(int i = 0; i < nums.size(); i++) {
            if(tempLast == nums.at(i)){
                count++; 
            } else {
                tempLast = nums.at(i); 
                count = 1; 
            }

            if(maxCount < count){
                maxCount = count; 
                maxCountIndx = i; 
            }
        }
        
        return nums.at(maxCountIndx); 
    }
};