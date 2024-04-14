#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> ivec;
    int num;
    while(std::cin >> num)
    {
        ivec.push_back(num);
    }
    // 注意: auto &i : ivec 可能导致越界访问，因为 i 可能大于 ivec 的大小。
    // chk for empty vector
    if (ivec.empty())
    {
        std::cout << "input at least one integer." << std::endl;
        return -1;
    }
    // chk for only 1 integer
    if (ivec.size() == 1)
    {
        std::cout << "only one integer " << ivec[0] << ", it doesn't have any adjacent elements." << std::endl;
        return -1;
    }

    for (size_t i = 0; i < ivec.size() - 1; ++i) 
        std::cout << ivec[i] + ivec[i+1] << std::endl;
}