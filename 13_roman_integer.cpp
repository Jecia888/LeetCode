#include <vector>  
#include <string> 
#include <unordered_map>
#include <iterator> 
#include <algorithm> 

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<std::string, int> mp = {{"I", 1}, {"V", 5}, {"X", 10}, {"L", 50},{"C", 100},{"D", 500},{"M", 1000}, {"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400}, {"CM", 900}};

        std::vector<std::string> vec = {"IV", "IX", "XL", "XC", "CD", "CM"}; 
        int num = 0; 
        for(int i = 0; i < vec.size(); i++){
            auto find = s.find(vec[i]); 
            if(find != std::string::npos) {
                num += mp[vec[i]]; 
                s.erase(find, 2); 
            }
        }
        for(int i = 0; i < s.size(); i++){
            std::string temp(1, s[i]);
            num += mp[temp]; 
        }
        return num; 
    }
};