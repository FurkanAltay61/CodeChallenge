#include "Longest_vowel_chain.h"

//#define METHOD1
//#define METHOD2
#define METHOD3

int solve(std::string s){
#ifdef METHOD1
    int maxLen = 0, len = 0;
	for(const auto &c : s + " "){
        if ( std::string("aeiouAEIOU").find(c) != std::string::npos) len++;
        else maxLen = std::max(maxLen,len), len = 0; 
    }
    return maxLen;
#endif

#ifdef METHOD2
    const std::string vowels = "aeiouAEIOU";
    int maxLen = 0, currentLen = 0;
    std::for_each(s.begin(),s.end(), [&](char c){
        if(vowels.find(c) != std::string::npos) {
            ++currentLen;
            maxLen = std::max(maxLen,currentLen);
        } else {
            currentLen = 0;
        }
    });
    return maxLen;
#endif

#ifdef METHOD3
    const std::string vowels = "aeiouAEIOU";
    int windowStart = 0, maxLen = 0;
    for(int windowEnd = 0; windowEnd < s.size(); windowEnd++) {
        std::cout << windowEnd << std::endl;
        if(vowels.find(s[windowEnd]) != std::string::npos) {
            maxLen = std::max(maxLen, windowEnd - windowStart + 1);
        } else {
            windowStart = windowEnd+1;
        }
    }
    return maxLen;
#endif
}

