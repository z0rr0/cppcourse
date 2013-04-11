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
ClassA::ClassA() {
    name = "class A";
}
ClassA::~ClassA() {
}
void ClassA::printname() {
    std::cout<< "Name="<< name<< "\n";
}
ClassB::ClassB() {
    name = "class B";
}
ClassB::~ClassB() {
    name = "class B";
}
void ClassB::testb() {
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

