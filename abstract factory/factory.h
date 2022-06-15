#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "product.h"
#include <iostream>

using namespace std;

class AbstractFactory
{
public:
    ConcreteProductA * getProductA();
    ConcreteProductB * getProductB();
};
class ConcreteFactory_1 : public AbstractFactory
{
public:
    ConcreteProductA * getProductA()
    {
        return new ConcreteProductA_1();
    }

    ConcreteProductB * getProductB()
    {
        return new ConcreteProductB_1();
    }
};
class ConcreteFactory_2 : public AbstractFactory
{
public:
    ConcreteProductA * getProductA()
    {
        return new ConcreteProductA_2();
    }
    
    ConcreteProductB * getProductB()
    {
        return new ConcreteProductB_2();
    }
};
#endif