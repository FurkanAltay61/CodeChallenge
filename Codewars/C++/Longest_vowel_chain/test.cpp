#include "Longest_vowel_chain.h"

//Link: https://www.codewars.com/kata/59c5f4e9d751df43cf000035/cpp

void testlongestvowel(std::string input, int expected) {
    int result = solve(input);
    if(result != expected){
        std::cerr << "Test failed " << input << "result is: "<< 
        result << ", expected :" << expected << std::endl;
        exit(EXIT_FAILURE);
    }
}

int main() {
    testlongestvowel("ultrarevolutionariees", 3);
    testlongestvowel("codewarriors",2);
    testlongestvowel("suoidea",3);
    testlongestvowel("strengthlessnesses",1); 
    testlongestvowel("mnopqriouaeiopqrstuvwxyuaeiouaeiou",11);

}