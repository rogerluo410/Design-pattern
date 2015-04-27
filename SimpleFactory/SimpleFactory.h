/*
   Desc: An abstract factory class.
*/
#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_
#include <cstdlib>
#include <iostream>
#include "ConcreteProduct.h"
using namespace std;

class Product;
class SimpleFactory
{
   public:
          virtual ~SimpleFactory(){ cout<<"SimpleFactory::Destructor"<<endl; }
          virtual Product* CreateProduct(int)=0;
   protected:
          SimpleFactory(){ cout<<"SimpleFactory::Constructor"<<endl;  }
   private:
};
#endif  //_SIMPLEFACTORY_H_
