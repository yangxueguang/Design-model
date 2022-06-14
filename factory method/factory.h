#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "product.h"

class Factory
{
public:
    virtual Product * CreateProduct() = 0;
};
class FactoryA : public Factory
{
public:
    Product * CreateProduct() override
    {
        return new ProductA();
    }
};
class FactoryB : public Factory
{
public:
    Product * CreateProduct() override
    {
        return new ProductB();
    }
};
#endif