#include <vector>  
#include <iterator> 
#include <algorithm> 

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        k = k % nums.size(); 
        std::vector<int> subvector = {nums.end() - k, nums.end()};
        nums.erase(nums.end() - k, nums.end()); 
        nums.insert(nums.begin(), subvector.begin(), subvector.end());
    }
};