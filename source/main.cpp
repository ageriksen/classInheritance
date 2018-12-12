#include "base.h"
#include "derived.h"
#include <iostream>

int main()
{
    int a = 2;
    int b = 3;
    int product1 = 4;
    int product2 = 5;
    Base *base_ptr;

    base_ptr = new Derived( a, b );

    base_ptr -> setParam( product1, product2);

    std::cout
        << "The product of " << product1
        << " and " << product2
        << " is " << base_ptr ->calculate()
        << std::endl;

    return 0;
}; // end main
