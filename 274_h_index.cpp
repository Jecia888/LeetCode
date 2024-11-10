#include <vector>  
#include <iterator> 
#include <algorithm> 

class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        sort(citations.begin(), citations.end()); 
        int hIndx = 0; 
        int size = citations.size(); 
        int cur = 0; 
        for(int i = 0; i < size; i++){
            if(citations.at(i) <= size - i) {
                cur = citations.at(i); 
            } else if(citations.at(i) > size - i) {
                cur = size - i; 
            } 
            if(cur > hIndx) {
                hIndx = cur; 
            }
        }
        return hIndx; 
    }
};