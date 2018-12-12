#ifndef BASE_H
#define BASE_H

class Base
{
    public:
        Base(int init1, int init2)
        {
            m_init1 = init1;
            m_init2 = init2;
        }

        virtual void setParam(int , int) = 0;
        virtual double calculate() = 0;

    protected:
        int m_init1;
        int m_init2;


};

#endif //BASE_H
