#include "Rot13.h"

//#define METHOD1
#define METHOD2

std::string Rot13(std::string msg){
    // Write your code here
    
#ifdef METHOD1
    std::string alphabet_low{"abcdefghijklmnopqrstuvwxyz"};
    std::string alphabet_up{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string result{""};
    std::string::iterator index;
    size_t pos{0};
    for(auto chr : msg){
        if(isalpha(chr)){
            if(isupper(chr)){
                index = std::find(alphabet_up.begin(),alphabet_up.end(),chr);
                if(index != alphabet_up.end())
                    pos = std::distance(alphabet_up.begin(),index);
                (pos + 13 > alphabet_up.length()-1) ? result += alphabet_up[pos-13] : result += alphabet_up[pos+13];
            }else{
                index = std::find(alphabet_low.begin(),alphabet_low.end(),chr);
                if(index != alphabet_low.end())
                    pos = std::distance(alphabet_low.begin(),index);
               (pos + 13 > alphabet_low.length()-1) ? result += alphabet_low[pos-13] : result += alphabet_low[pos+13];
            }
        }else{
            result += chr;
        }
    }
    return result;
#endif

#ifdef METHOD2 
    std::string output = msg;
    for(char &c : output){
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            char base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';
            c = (c - base + 13) % 26 + base;
        }
    }
    return output;
#endif
    
}

