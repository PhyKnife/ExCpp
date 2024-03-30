#include <iostream>

int main() {
    std::string s, result;
    while (std::cin >> s)
    {
        /* code */
        result += s + " ";
    }
    std::cout << result << std::endl;
    
}