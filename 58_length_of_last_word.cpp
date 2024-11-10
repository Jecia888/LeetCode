#include <string>
using std::string; 

class Solution {
public:
    int lengthOfLastWord(string s) {
        int numCharacter = 0; 
        bool foundWord = false; 
        for(int i = s.length() - 1; i >= 0.; i--){
            if(s[i] != ' ') {
                numCharacter++; 
                foundWord = true;
            } 
            if(foundWord && s[i] == ' ') {
                return numCharacter; 
            }
        }
        return numCharacter; 
    }
};