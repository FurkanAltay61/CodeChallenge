#include "Directions_Reduction.h"

#define METHOD1
//#define METHOD2

std::map<std::string,std::string> directionMap = {{"NORTH","SOUTH"},{"SOUTH","NORTH"},
                                                {"EAST","WEST"},  {"WEST","EAST"}};

std::vector<std::string> dirReduc(std::vector<std::string> &arr){
    // Write your code here

#ifdef METHOD1
    std::vector<std::string> temp = arr;
    std::vector<std::string> result{};
    for(const auto& dir: arr){
        if(!result.empty() && directionMap[result.back()] == dir){
            result.pop_back();
        } else {
            result.push_back(dir);
        }
    }
    return result;

#endif

#ifdef METHOD2
#endif

}

