// test.cpp
// Created on: 2024-03-23
// Author: PhyKnife
// Description: for source code test
#include <iostream>

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
}
