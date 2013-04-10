#include <string>
// classes

class A
{
public:
    A();
    ~A();

    void printname();
    std::string name;
    /* data */
};

class B : public A
{
public:
    B();
    ~B();
    void testb();
    // std::string name;
    /* data */
};

// methods
void the_test();
int factorial(const int a);
