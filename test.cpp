// test.cpp
// Created on: 2024-03-23
// Author: PhyKnife
// Description: for source code test
#include <iostream>
#include <vector>
struct Sales_data {
        std::string isbn;
        double prize;
        int number; /* empty */
    };  
int main()
{
    /* const pointer
    int errN = 0;
    // curErr is a const pointer to errN, it always points to errN
    int *const curErr = &errN;
    const double pi = 3.14159;
    // pip is a const pointer to const object pi.
    const double *const pip = &pi;

    // try to change the value
    *pip = 3.14 // error: pip is a pointer to const
    // if the object curErr points is a non-zero value
    if (*curErr)
    {
        errorHandler();
        // assign 0 to the object curErr points
        *curErr = 0;
    }
    */
    /* const reference
    // Ex2.27
    int i = -1, &r = 0; // error: r must refer to an object
    int *const p2 = &i2; // 
    const int i = -1, &r = 0; // 
    const int *const p3 = &i2; // 
    const int *p1 = &i2; //
    const int &const r2; // error: a reference must be initialized
    const int i2 = i, &r = i; // 
    */
    /*
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b; // int
    decltype(*p) c = i;
    // decltpe's parameter is an lvalue, so decltype(i) is int, 
    // decltype((variable)) is always a reference type
    decltype((i)) d = i; // int&
    decltype(i) e; // int
    */
   /*
    int a = 3, b = 4;
    decltype(a) c = a; // int
    decltype((a)) d = a; // int&
    ++c;
    std::cout << c;
    std::cout << d << std::endl;
    ++d;
    std::cout << a << c<<d <<std::endl;
    */
    /*      
    Sales_data item = {"978-0590353403", 25.0, 15};
    std::cin >> item.isbn >> item.prize >> item.number;
    std::cout << "ISBN: " << item.isbn << std::endl;
    std::cout << "Prize: " << item.prize << std::endl;
    std::cout << "Number: " << item.number << std::endl;
    */
    /*
    std::string s("hello World!!!");
    for (auto &c : s)
    {
        c = toupper(c);// toupper() will change the value of c to upper case
    }
    std::cout << s << std::endl;
    */
    std::vector<int> ivec;
    std::vector<Sales_data> SalesVec;
    std::vector<std::vector<std::string>> file;

}