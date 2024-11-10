#include <vector>  
#include <iterator> 
#include <algorithm> 


class Solution {
public:

    bool canJump(std::vector<int>& nums) {
        int gas = 0; 
        for(int i = 0; i < nums.size(); i++) {
            if (gas < 0){
                return false; 
            } else if (nums.at(i) > gas){
                gas = nums.at(i); 
            }
            gas -= 1; 
        }
        return true; 
    } 

/* recursion over time 
    bool canJump(vector<int>& nums) {

        return canJump(nums, 0); 
        
    }

    bool canJump(vector<int>& nums, int curIndex) {
        if(curIndex == nums.size() - 1) {
            return true; 
        }
        if(nums.at(curIndex) == 0 || curIndex > nums.size() - 1) {
            return false; 
        }
        for(int i = 1; i <= nums.at(curIndex); i++) {
            if(canJump(nums, curIndex+i)){
                return true; 
            }
        }
        return false; 
    }*/ 
};