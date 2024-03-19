#include <iostream>

int main()
{
    int a = 0, b = 1;
    // p1 is the pointer to a, it stored the address of a, 
    // p2 is the pointer to p1, it stored the pointer p1 which points a.
    int *p1 = &a, *p2 = p1;
    // show the value of pointer and the object which it points
    std::cout << p1 <<" "<< *p1 <<" " <<p2 << " "<<*p2 << std::endl; 
    // change the value of p1 
    p1 = &b;
    std::cout << p1 <<" "<< *p1 <<" " <<p2 << " "<<*p2 << std::endl; 
    // change the value to the object which p2 points, it points b now
    *p2 = b;
    std::cout << p1 <<" "<< *p1 <<" " <<p2 << " "<<*p2 << std::endl; 
}