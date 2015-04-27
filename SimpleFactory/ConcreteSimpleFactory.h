/*
  Desc: A concrete factory class
*/

#ifndef _CONCRETESIMPLEFACTORY_H_
#define _CONCRETESIMPLEFACTORY_H_
#include "SimpleFactory.h"

class ConcreteSimpleFactory:public SimpleFactory
{
   public:
         ConcreteSimpleFactory::ConcreteSimpleFactory();
         ConcreteSimpleFactory::~ConcreteSimpleFactory();
         Product* CreateProduct(int);  
   protected:
             
   private:
      
};



#endif //_CONCRETESIMPLEFACTORY_H_
