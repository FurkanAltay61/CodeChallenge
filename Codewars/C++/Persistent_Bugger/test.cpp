#include "PersistentBugger.h"

//Link: https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/cpp

static int test_num{1};

void testPersistentBugger(long long input, int expected) {
    int result = persistence(input);
    std::cout << result << std::endl;
    if(result != expected){
        std::cerr << "Test failed " << "step :" << test_num << std::endl;
        exit(EXIT_FAILURE);
    }
    test_num++;
}

int main() {
    testPersistentBugger(39,3);
    testPersistentBugger(4,0);
    testPersistentBugger(25,2);
    testPersistentBugger(999,4);
    testPersistentBugger(444,3);
}