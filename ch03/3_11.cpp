#include <iostream>
// 下面的语句合法吗
// 根据for循环中的代码来看是否合法，c是string 对象中字符的引用，s是常量。因此如果for循环中的代码重新给c赋值就会非法，如果不改变c的值，那么合法。
int main(){
    const std::string s = "Keep out!";
    for(auto &c : s){/*...*/}
}
