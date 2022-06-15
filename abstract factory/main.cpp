/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-15
 *  抽象工厂的作用使处理产品簇，将具有同种特性地产品划分成同一个factory类，
 * @copyright Copyright (c) 2022
 * 
 */
#include "product.h"
#include "factory.h"
int main()
{
    ConcreteFactory_1 *factory1 = new ConcreteFactory_1();
    ConcreteFactory_2 *factory2 = new ConcreteFactory_2();
    ConcreteProductA *pA_1 = factory1->getProductA();
    ConcreteProductB *pB_1 = factory1->getProductB();
    pA_1->Show();
    pB_1->Show();
    return 0;
}