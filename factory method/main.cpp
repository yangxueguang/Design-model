#include "product.h"
#include "factory.h"

int main()
{
    FactoryA * pFA = new FactoryA();
    FactoryB * pFB = new FactoryB();
    Product * pA = pFA->CreateProduct();
    Product * pB = pFB->CreateProduct();
    pA->Show();
    pB->Show();
    if (pA) {
        delete pA;
    }
    if (pB) {
        delete pB;
    }
    if (pFA) {
        delete pFA;
    }
    if (pFB) {
        delete pFB;
    }
    return 0;
}