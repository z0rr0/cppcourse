#include <iostream>
#include "thebestzorro.h"
#include "templates.h"

int main()
{
    the_test();
    std::cout<<"Factorial(5)="<<factorial(5)<<"\n";

    int len=20;
    double* x;
    x = new double[len];
    generate_array<double>(x, len);
    print_array<double>(x, len);
    delete x;
    return 0;
}