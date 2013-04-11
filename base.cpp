#include <iostream>
#include "cppstyle.h"
#include "templates.h"

int main()
{
    the_test();
    std::cout<<"Factorial(5)="<<factorial(5)<<"\n";
    ClassA a;
    ClassB b;
    a.printname();
    b.printname();
    std::cout << "\nfinish\n";
    // int len=20;
    // double* x;
    // x = new double[len];
    // generate_array<double>(x, len);
    // print_array<double>(x, len);
    // delete x;
    return 0;
}