#include <iostream>
// 该程序可以编译运行
// 语法上合法, 但试图访问未定义的内存位置, 会导致未定义行为
int main(){
    std::string s;
    std::cout << s[0] << std::endl;
}

