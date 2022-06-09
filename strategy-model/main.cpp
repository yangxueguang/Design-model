#include "strategy.h"

int main()
{
    Context context(std::make_shared<strategyAdd>());
    int a = 4;
    int b = 3;
    cout << context.doOperate(a,b) << endl;
    context.setStrategy(std::make_shared<strategySub>());
    cout << context.doOperate(a,b) << endl;
    return 0;
}