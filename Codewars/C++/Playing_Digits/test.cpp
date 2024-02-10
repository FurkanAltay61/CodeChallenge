#include "Playing_Digits.h"

//Link: https://www.codewars.com/kata/5552101f47fc5178b1000050/cpp

static int test_num{1};

void testPlayingDigits(int n, int p, int expected) {
    int result = digPow(n,p);
    if(result != expected){
        std::cerr << "Test failed " << "step :" << test_num << std::endl;
        exit(EXIT_FAILURE);
    }
    test_num++;
}

int main() {
    testPlayingDigits(89, 1, 1);
    testPlayingDigits(92, 1, -1);
    testPlayingDigits(46288, 3, 51);
    testPlayingDigits(114, 3, 9);
}