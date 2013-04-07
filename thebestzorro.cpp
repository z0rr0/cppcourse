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
#include "thebestzorro.h"

// ****************
// Classes
// ****************



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