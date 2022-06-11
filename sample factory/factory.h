#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "product.h"

class Factory
{
private:
    Product * m_product;
public:
    Product * CreateProduct(char ch)
    {
        switch (ch)
        {
        case 'a':
            m_product = new ProductA();
            break;
        case 'b':
            m_product = new ProductB();
            break;
        case 'c':
            m_product = new ProductC();
            break;
        default:
            m_product = nullptr;
            break;
        }
        return m_product;
    }
};
#endif