#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <ctime>
#include "cppstyle.h"

// ****************
// Classes
// ****************
A::A() {
    name = "class A";
}
A::~A() {
}
void A::printname() {
    std::cout<< "Name="<< name<< "\n";
}
B::B() {
    name = "class B";
}
B::~B() {
    name = "class B";
}
void B::testb() {
    std::cout<< "testb\n";
}


// ****************
// Separate methods
// ****************

// test function
void the_test() {
    std::cout<<"Hello word. Test done.\n";
}

// simple factorial
int factorial(const int a) {
    if (a <= 0) return 1;
    return factorial(a-1) * a;
}

// ...
// template<typename T> bynary_search() {
//     return 0
// }