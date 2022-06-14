#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>

using namespace std;

class Product
{
public:
    virtual void Show() = 0;
};

class ProductA : public Product
{
public:
    void Show() override
    {
        cout << "this is the Product A ! \n" << endl;
    }
};

class ProductB : public Product
{
public:
    void Show() override
    {
        cout << "this is the Produce B ! \n" <<endl;
    }
};
#endif