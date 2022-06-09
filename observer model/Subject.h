#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include "Observer.h"
#include <iostream>
#include <list>

using namespace std;

class Subject
{
    public:
        virtual void registObser(Obser *) = 0;
        virtual void deleteObser(Obser *) = 0;
        virtual void notify() = 0;
};

class concretSubject : public Subject
{
    private:
        std::list<Obser *> m_obser;
    public:
        void registObser(Obser * ob) override
        {
            m_obser.push_back(ob);
        }
        void deleteObser(Obser * ob) override
        {
            m_obser.remove(ob);
            
        }
        void notify() override
        {
            std::list<Obser *>::iterator it = m_obser.begin();
            while (it != m_obser.end()) {
                (*it)->update();
                it++;
            }
        }
};

#endif