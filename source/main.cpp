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
    Derived derived_obj( a, b);
    base_ptr = &derived_obj;
    //base_ptr = new Derived( int 2, int 3 );

    base_ptr -> setParam( product1, product2);
    base_ptr -> calculate();

    std::cout << "The product of " << product1 << " and " << product2 << " is " << base_ptr ->calculate() << std::endl;

    return 0;
}; // end main
