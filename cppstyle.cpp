#include <iostream>
// #include <fstream>
// #include <sstream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iterator>
#include <set>
#include "cppstyle.h"
using namespace std;

// ****************
// Classes
// ****************
ClassA::ClassA() {
    name_ = "class A";
}
ClassA::~ClassA() {
}
void ClassA::printname() {
    cout<< "Name="<< name_ << endl;
}
ClassB::ClassB() {
    name_ = "class B";
}
ClassB::~ClassB() {
}
ClassC::ClassC() {
    name_ = "class C";
}
ClassC::~ClassC() {
}

// ****************
// Separate methods
// ****************

// test function
void the_test() {
    cout<<"Hello word. Test done.\n";
}

// simple factorial
int factorial(const int a) {
    if (a <= 0) return 1;
    return factorial(a-1) * a;
}

// simple using of set
void simple_sorting() {

    set<int> coll((istream_iterator<int>(cin)),
                     istream_iterator<int>());

    // print all elements
    cout << "sorted result: " << endl;
    copy (coll.begin(), coll.end(), ostream_iterator<int>(cout, "\n"));

    //max
    cout << "max value : " << *(coll.rbegin()) << endl;

    /*
    // first gap
    set<int> allLinUid;
    for (int i=50; i<=60; i++) allLinUid.insert (i); // allLinUid: 5000 5001 5002 5003 ...

    pair<set<int>::iterator,set<int>::iterator> resultpair;

    // using default comparison:
    resultpair = std::mismatch (coll.begin(), coll.end(), allLinUid.begin());
    std::cout << "First not used linux uid number: " << *resultpair.second << endl;
    */
}
