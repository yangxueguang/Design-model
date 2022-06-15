#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>
using namespace std;

class AbstractProduct
{
public:
    virtual void Show() = 0;
};

class ConcreteProductA : public AbstractProduct
{
public:
    void Show()
    {
        cout << " this is concreteProductA" << endl;
    }
};
class ConcreteProductA_1 : public ConcreteProductA
{
public:
    void Show()
    {
        cout << " this is concreteProductA_1" << endl;
    }
};
class ConcreteProductA_2 : public ConcreteProductA
{
public:
    void Show()
    {
        cout << " this is concreteProductA_2" << endl;
    }
};
class ConcreteProductB : public AbstractProduct
{
public:
    void Show()
    {
        cout << " this is concreteProductB" << endl;
    }
};
class ConcreteProductB_1 : public ConcreteProductB
{
public:
    void Show()
    {
        cout << " this is concreteProductB_1" << endl;
    }
};
class ConcreteProductB_2 : public ConcreteProductB
{
public:
    void Show()
    {
        cout << " this is concreteProductB_2" << endl;
    }
};
#endif