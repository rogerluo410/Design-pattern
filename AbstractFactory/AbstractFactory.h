#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_
#include <cstdlib>
#include <iostream>
#include "ConcreteMonsters.h"
using namespace std;

class AbstractFactory
{
   public:
          virtual ~AbstractFactory(){ cout<<"AbstractFactory::Destructor"<<endl; }
          virtual AbstractMonster* ProductorA(){ }
          virtual AbstractMonster* ProductorB(){ }
          virtual AbstractMonster* ProductorC(){ }
   protected:
         AbstractFactory(){ cout<<"AbstractFactory::Constructor"<<endl; }    
   private:
              
};

#endif //_ABSTRACTFACTORY_H_
