#include "Split_strings.h"

#define METHOD1
//#define METHOD2

std::vector<std::string> solution(const std::string &s){
    // Write your code here

#ifdef METHOD1
    std::vector<std::string> result;
    std::string temp = s;
    int strlen = temp.length();
    if(strlen % 2 != 0){
      temp.append("_");
    }
    int char_count{0};
    while(temp.length()> 0){
        result.emplace_back(temp.substr(0,2));
        temp.erase(0,2);
    }
    return result;
#endif

#ifdef METHOD2
    std::vector<std::string> result;
    for( size_t i = 0; i < s.length(); i += 2){
        result.push_back(s.substr(i,2));
    }
    if(s.length() % 2 != 0){
        result.back() += "_";
    }
    return result;
#endif

}

