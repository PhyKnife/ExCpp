#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> str;
    for (std::string s; std::cin >> s; str.push_back(s));
}