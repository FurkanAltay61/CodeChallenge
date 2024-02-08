#include "Split_strings.h"

//Link: https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp

void testSplitstrings(const std::string &input, std::vector<std::string> expected) {
    std::vector<std::string> result = solution(input);
    if(result != expected){
        std::cerr << "Test failed " << std::endl;
        exit(EXIT_FAILURE);
    }
}

int main() {
    testSplitstrings("abcdef", {"ab", "cd", "ef"});
    testSplitstrings("HelloWorld", {"He", "ll", "oW", "or", "ld"});
    testSplitstrings("abcde", {"ab", "cd", "e_"});
    testSplitstrings("LovePizza", {"Lo", "ve", "Pi", "zz", "a_"}); 
}