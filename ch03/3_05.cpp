#include <iostream>

int main(){
    std::string s, result;
    while (std::cin >> s)
    {
        result += s;
    }
    std::cout << result << std::endl;
    
}