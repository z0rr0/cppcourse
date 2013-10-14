#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
#include <utility>

#include "cppstyle.h"
// #include "templates.h"

#include <chrono>
#include <thread>
#include <mutex>

std::mutex g_lock;


void threadFunction()
{
     g_lock.lock();
     std::cout << "entered thread " << std::this_thread::get_id() << std::endl;
     // std::this_thread::sleep_for(std::chrono::seconds(rand()%10));
     std::this_thread::sleep_for(std::chrono::seconds(2));
     std::cout << "leaving thread " << std::this_thread::get_id() << std::endl;

     g_lock.unlock();
}

void hello()
{
    std::cout<<"Hello Concurrent World\n";
}

int main(int argc, char * argv[])
{
    the_test();
    ClassA* a;
    // ClassB* b;
    ClassC* c;
    try
    {
        a = new ClassA;
        c = new ClassC;
    }
    catch(std::bad_alloc& exc)
    {
        std::cout << "allocate error" << std::endl;
        return 1;
    }
    a->printname();
    c->printname();

    // srand((unsigned int)time(0));
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);
    t1.join();
    t2.join();

    // std::cout << "please enter int values and pass Ctrl+D" << std::endl;
    // simple_sorting();


    std::cout << "\nfinish"<< std::endl;

    delete a;
    delete c;
    return 0;
}
