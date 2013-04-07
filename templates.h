#include <iostream>
#include <cstdlib>
#include <ctime>

template <class T>
void generate_array(T* a, const int len) {
    int c = 0, d = 20;
    if (a == NULL) {
        std::cout<<"Memory error\n";
        return;
    }
    srand(time(NULL));
    for (int i=0; i < len; i++) {
        a[i] = 1.0 * std::rand()/RAND_MAX * (d-c) + c;
        // std::cout<< a[i] <<"\n";
    }
}

template <class T>
void print_array(T* a, const int len) {
    for (int i=0; i < len; i++) {
        std::cout<< a[i] <<" ";
    }
    std::cout<<"\n";
}