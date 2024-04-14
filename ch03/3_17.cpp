#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main()
{
    vector<string> str;
    string word;
    while (std::cin >> word)
    {
        str.push_back(word);
    }
    for(auto &i : str)
    {
        for(auto &c : i)
        {
            c = toupper(c);
        }
    }
    for(string::size_type i = 0; i != str.size(); ++i)
    {
        if(i!=0 && i%8 ==0) std::cout << str[i] << std::endl;
        std::cout << str[i] << " ";
    }
    std::cout<<std::endl;
    
}