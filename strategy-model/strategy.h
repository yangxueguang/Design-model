#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <iostream>
#include <memory>

using namespace std;

class strategy
{
public:
    virtual int operat (int a, int b) = 0;
};

class strategyAdd : public strategy
{
public:
    int operat (int a, int b)
    {
        return a + b;
    }
};

class strategySub : public strategy
{
public:
    int operat (int a, int b)
    {
        return a - b;
    }
};

class Context
{
private:
    std::shared_ptr <strategy> m_spStrategy;
public:
    Context(std::shared_ptr <strategy> stragety)
    {
        m_spStrategy = stragety;
    }
    void setStrategy( std::shared_ptr <strategy> strategy)
    {
        m_spStrategy = strategy;
    } 
    int doOperate(int a, int b)
    {
        m_spStrategy->operat(a,b);
    }
};
#endif