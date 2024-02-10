#include "Playing_Digits.h"

//#define METHOD1
#define METHOD2

int digPow(int n, int p){
    // Write your code here

#ifdef METHOD1
    int temp = n, residue{0}, result{0}, total{0};
    std::vector<int>numarr;
    while(temp > 0){
        residue = temp % 10;
        numarr.emplace_back(residue);
        temp /= 10;
    }
    std::reverse(numarr.begin(),numarr.end());

    for(auto digit : numarr){
        total += pow(digit,p);
        p++;
    }

    if(total % n == 0){
        result = total/n;
    } else {
        result = -1;
    }

    return result;
#endif

#ifdef METHOD2
    std::string nStr = std::to_string(n);
    long long sum = 0;
    for (auto c : nStr){
        int digit = c - '0';
        sum += std::pow(digit,p++);
    }
    return (sum % n == 0) ? (sum / n) : (-1);
#endif

}

