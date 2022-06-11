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
        cout << "this is the ProductA !\n" << endl;
    }
};

class ProductB : public Product
{
public:
    void Show() override
    {
        cout << "this is the ProductB !\n" << endl;
    }
};

class ProductC : public Product
{
public:
    void Show() override
    {
        cout << "this is the ProductC !\n" << endl;
    }
};

#endif