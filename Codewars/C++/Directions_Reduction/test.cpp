#include "Directions_Reduction.h"

//Link: https://www.codewars.com/kata/550f22f4d758534c1100025a/train/cpp

static int test_num{1};

void testDirectionsReduction(std::vector<std::string> arr, std::vector<std::string> expected) {
    std::vector<std::string> result = dirReduc(arr);
    if(result != expected){
        std::cerr << "Test failed " << "step :" << test_num << std::endl;
        exit(EXIT_FAILURE);
    }
    test_num++;
}

int main() {
    std::vector<std::string> input ={"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
    std::vector<std::string> output = {"WEST"};
    testDirectionsReduction(input, output);
    input = {"NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH"};
    output = {"NORTH"};
    testDirectionsReduction(input,output);
}