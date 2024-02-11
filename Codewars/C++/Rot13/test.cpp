#include "Rot13.h"

//Link: https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp

static int test_num{1};

void testRot13(std::string input, std::string expected) {
    std::string result = Rot13(input);
    std::cout << result << std::endl;
    if(result != expected){
        std::cerr << "Test failed " << "step :" << test_num << std::endl;
        exit(EXIT_FAILURE);
    }
    test_num++;
}

int main() {
    testRot13("test","grfg");
    testRot13("Test","Grfg");
    testRot13("AbCd","NoPq");
    testRot13("t ,eS:T,A:bC!d","g ,rF:G,N:oP!q");
}