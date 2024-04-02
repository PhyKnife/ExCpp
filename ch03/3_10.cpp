#include <iostream>

int main(){
    std::string s = "this is a string";
    std::string ans;
    decltype(s.size()) index = 0;
    std::cin >> s;
    for (auto x:s)
    {
        if (!ispunct(x))
        {
            /* code */
            ans += x;
        }
        
    }

    std::cout << ans << std::endl;
    
}