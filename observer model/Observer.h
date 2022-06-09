#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <iostream>
#include <string>
using namespace std;

class Obser
{
    public:
        virtual void update() = 0;
};

class concreteObser1 : public Obser
{
    private:
        int m_val;
    public:
        concreteObser1(int a) : m_val(a){}
        void update()
        {
            cout << "concreteObser1, the val is " << m_val << endl;
        }
};

class concreteObser2 : public Obser
{
    private:
        string m_val;
    public:
        concreteObser2(string a) : m_val(a){}
        void update()
        {
            cout << "concreteObser2, the val is " << m_val << endl;
        }
};

#endif