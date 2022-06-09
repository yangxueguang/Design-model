#include "Subject.h"
#include "Observer.h"

int main()
{
    concretSubject sj;
    concreteObser1 * c1 = new concreteObser1(1);
    concreteObser2 * c2 = new concreteObser2("string_Val");
    sj.registObser(c1);
    sj.registObser(c2);
    sj.notify();
    cout << "delete\n";
    sj.deleteObser(c1);
    sj.notify();

    return 0;
}