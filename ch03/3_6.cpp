#include <iostream>

int main(){

    std::string s = "this is a string";
    for (auto &x :s)
    {
        x = 'X';
    }
    std::cout << s << std::endl;
    return 0;
}