#include "PersistentBugger.h"

//#define METHOD1
//#define METHOD2
#define METHOD3

std::vector<int> numdigit(long long num);
int multiplyDigits(int num);

int persistence(long long n){
    // Write your code here
    
#ifdef METHOD1
  int total{1},count{0};
  if(n < 10)
    return 0;
  total = n;
  while(true){
    std::vector<int> nums = numdigit(total);
    if(nums.size() < 2)
      break;
    total = 1;
    for(auto d: nums)
      total *= d;  
    count++;
  }
  return count;
#endif

#ifdef METHOD2
    int count = 0;
    while (n >= 10) { // Continue until num is a single digit
        n = multiplyDigits(n);
        count++;
    }
    return count;
#endif

#ifdef METHOD3
    int count = 0;
    while (n >= 10) { // Continue if num has more than one digit
        std::string numStr = std::to_string(n);
        n = 1; // Reset num to use for the product of digits
        for (char digitChar : numStr) {
            n *= (digitChar - '0'); // Convert char to int and multiply
        }
        ++count; // Increment persistence count
    }
    return count;
#endif
    
}

std::vector<int> numdigit(long long num){
  std::vector<int> digits{0};
  int residue{0};
  while(num > 0){
    residue = num % 10;
    digits.emplace_back(residue);
    num /= 10;
  }
  std::reverse(digits.rbegin(),digits.rend());
  digits.pop_back();
  return digits;
}


int multiplyDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10; // Multiply the product by the last digit
        num /= 10; // Remove the last digit
    }
    return product;
}

