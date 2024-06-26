#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using std::vector;
using std::string;

void check_and_print(const vector<int>& vec)
{
    std::cout << "size: " << vec.size() << "  content: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << (it != vec.end() - 1 ? "," : "");
    std::cout << "]\n" << std::endl;
}

void check_and_print(const vector<string>& vec)
{

    std::cout << "size: " << vec.size() << "  content: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << (it != vec.end() - 1 ? "," : "");
    std::cout << "]\n" << std::endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    check_and_print(v1);
    check_and_print(v2);
    check_and_print(v3);
    check_and_print(v4);
    check_and_print(v5);
    check_and_print(v6);
    check_and_print(v7);

    return 0;
}