#include "product.h"
#include "factory.h"

int main()
{
    Factory * Pfactory = new Factory();
    Product *pA = Pfactory->CreateProduct('a');
    pA->Show();
    Product *pB = Pfactory->CreateProduct('b');
    pB->Show();
    return 0;
}