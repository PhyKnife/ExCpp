#include <iostream>

int main(){
    std::string s = "this is a string";
    for (char x : s)
    {
        x = 'X';
    }
    std::cout << s << std::endl;
}