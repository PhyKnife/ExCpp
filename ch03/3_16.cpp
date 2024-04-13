#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> v1;
    std::cout << "v1 size: " << v1.size() << std::endl;
    std::cout << "values: ";
    for(auto i : v1)
        std::cout << i << " ";
    if (!v1.empty())
        std::cout << "\b" << std::endl;
    else
        std::cout << "v1 is empty" << std::endl;
    vector<int> v2(10);
    std::cout << "v2 size: " << v2.size() << std::endl;
    std::cout << "values: ";
    for(auto i : v2)
        std::cout << i << " ";
    if (!v2.empty())
        std::cout << "\b" << std::endl;
    else
        std::cout << "v2 is empty" << std::endl;
    vector<int> v3(10, 42);
    std::cout << "v3 size: " << v3.size() << std::endl;
    std::cout << "values: ";
    for(auto i : v3)
        std::cout << i << " ";
    if (!v3.empty())
        std::cout << "\b" << std::endl;
    else
        std::cout << "v3 is empty" << std::endl;
    vector<int> v4{10};
    std::cout << "v4 size: " << v4.size() << std::endl;
    std::cout << "values: ";
    for(auto i : v4)
        std::cout << i << " "; 
    if (!v4.empty())
        std::cout << "\b" << std::endl;
    else
        std::cout << "v4 is empty" << std::endl;
    vector<int> v5{10, 42};
    std::cout << "v5 size: " << v5.size() << std::endl;
    std::cout << "values: ";
    for(auto i : v5)
        std::cout << i << " ";
    if (!v5.empty())
        std::cout << "\b" << std::endl;
    else
        std::cout << "v5 is empty" << std::endl;
    vector<std::string> v6{10};
    std::cout << "v6 size: " << v6.size() << std::endl;
    std::cout << "values: ";
    for(auto i : v6)
        std::cout << i << " ";
    if (!v6.empty())
        std::cout << "\b" << std::endl;
    else
        std::cout << "v6 is empty" << std::endl;
    vector<std::string> v7{10, "hi"};
    std::cout << "v7 size: " << v7.size() << std::endl;
    std::cout << "values: ";
    for(auto i : v7)
        std::cout << i << " ";
    if (!v7.empty())
        std::cout << "\b" << std::endl;
    else
        std::cout << "v7 is empty" << std::endl;
    
}