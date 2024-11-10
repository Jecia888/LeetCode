#include <vector>
using std::vector;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre;
        int prevPre = nums.at((int)nums.size() - 1); 
        pre.push_back(prevPre); 

        vector<int> suf;
        int prevSuf = nums[0]; 
        suf.push_back(prevSuf);  

        for(int i = 1; i < nums.size() - 1; i++){
            prevPre *= nums.at((int)nums.size() - 1 - i); 
            pre.insert(pre.begin(), prevPre); 
    
            prevSuf *= nums.at(i); 
            suf.push_back(prevSuf); 
        }

        nums[0] = pre[0]; 
        nums[nums.size() - 1] = suf[suf.size()-1]; 

        for(int i = 1; i < pre.size(); i++){ 
            nums[i] = pre.at(i)*suf.at(i-1); 
        } 

        /*
        1 2 3 4 

            pre: 

             2 3 4 => 1,  3 4 =>2 , 4 => 3 

            suf:  
             1 => 2, 2 1 => 3, 3 2 1 => 4
        */ 
        return nums; 
    }
};