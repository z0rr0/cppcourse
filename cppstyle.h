#include <string>

class ClassA
{
public:
    ClassA();
    ~ClassA();

    /* data */
    void printname();
protected:
    std::string name_;

};

class ClassB
{
    std::string name_;

public:
    ClassB();
    ~ClassB();

    /* data */
};

class ClassC : public ClassA
{
public:
    ClassC();
    ~ClassC();

    /* data */
};

// methods
void the_test();
int factorial(const int a);
void simple_sorting();
