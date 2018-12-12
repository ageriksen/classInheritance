#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived: public Base
{
    public:
        Derived( int init1, int init2 ):
            Base( init1, init2 )
        {
        }

        void setParam( int param1, int param2 )
        {
            m_param1 = param1;
            m_param2 = param2;
        }

        double calculate()
        {
            return double(m_param1)*double(m_param2);
        }

    private:
        int m_param1;
        int m_param2;

};

#endif //DERIVED_H
