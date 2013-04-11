#include <string>
// classes

class ClassA
{
public:
    ClassA();
    ~ClassA();

    void printname();
    std::string name;
    /* data */
};

class ClassB : public ClassA
{
public:
    ClassB();
    ~ClassB();
    void testb();
    // std::string name;
    /* data */
};

// methods
void the_test();
int factorial(const int a);
