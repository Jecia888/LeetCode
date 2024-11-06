
#include <vector>          // For std::vector
#include <iterator>        // For std::make_move_iterator
#include <algorithm>       // For std::copy (if needed)


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        int tempIndx = 0; 
        std::vector<int> temp(nums.size(),0); 
        int tempVal = nums.at(0);
        std::vector<int> temp2; 

        for(int i = 0; i < nums.size(); i++){
            if(tempVal == nums.at(i)) {
                temp.at(tempIndx)++; 
            } else {
                tempIndx = i; 
                temp.at(tempIndx)++; 
                tempVal = nums.at(i); 
            }
        }

        for(int i = 0; i < temp.size(); i++){
            if(temp.at(i) != 0) {
                if(temp.at(i)==1) {
                    temp2.push_back(nums.at(i)); 
                } else if(temp.at(i)>=2) {
                    temp2.push_back(nums.at(i)); 
                    temp2.push_back(nums.at(i)); 
                }
            }
        }
        
        nums = temp2;
        return temp2.size(); 
    }
};