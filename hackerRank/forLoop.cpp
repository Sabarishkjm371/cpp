#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b, n;
    std::cin >> a >> b;
    std::string number[9] = {"one", "two", "three", "four", "five", "six",
                               "seven", "eight", "nine"};
    for( ; a <= b ; a++) {
        if (a < 10) {
            std::cout << number[a-1] << std::endl;
        } else {
            if (a%2)
                std::cout << "odd" << std::endl;
            else 
                std::cout << "even" << std::endl;
        }
    }
    return 0;
}