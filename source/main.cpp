#include "base.h"
#include "derived.h"

int main()
{
    Base *base_ptr;
    Derived derived_obj( int 2, int 3);
    base_ptr = &derived_obj;
    //base_ptr = new Derived( int 2, int 3 );

    base_ptr -> setParam( int 1, int 5);
    base_ptr -> calculate();

    return 0;
}; // end main
