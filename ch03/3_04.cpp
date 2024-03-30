#include <iostream>

int main() {
// compare two strings
/*
    std::string str1, str2;
    while (std::cin >> str1 >> str2)
    {
        if(str1 != str2)
        std::cout << "The larger one is" <<  " " << ((str1 >str2) ? str1 : str2) << std::endl;
    else
        std::cout << "The two strings r equal" << std::endl;
    }
*/    
// compare two string size
    std::string str3, str4;
    while (std::cin >> str3 >> str4)
    {
        if(str3.size() != str4.size())
        std::cout << "The longer one is" <<  " " << ((str3.size() >str4.size()) ? str3 : str4) << std::endl;
    else
        std::cout << "The two strings r equal" << std::endl;
    }
    return 0;
}