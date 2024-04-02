#include <iostream>

int main(){
    std::string s = "this is a string";
    for (char &x : s)
    {
        x = 'X';
    }
    std::cout << s << std::endl;
    decltype(s.size()) index = 0;
    while(index != s.size()){
        s[index] = 'Y';
        index++;
    }
    std::cout << s << std::endl;
    
}