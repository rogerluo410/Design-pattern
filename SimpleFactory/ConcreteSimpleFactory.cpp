#include "ConcreteSimpleFactory.h"

ConcreteSimpleFactory::ConcreteSimpleFactory()
{
    cout<<"ConcreteSimpleFactory::Constructor"<<endl;                                          
}

ConcreteSimpleFactory::~ConcreteSimpleFactory()
{
     cout<<"ConcreteSimpleFactory::Destructor"<<endl;                                              
}

Product* ConcreteSimpleFactory::CreateProduct(int i)
{
   Product* pPdt=NULL;
   switch(i)
   {
     case 1:
          pPdt=new Apple;
          break;         
     case 2:
          pPdt=new Orange;
          break;
     case 3:
          pPdt=new Pear;
          break;
     default:            
          pPdt=new Apple;
   }
   return   pPdt;
}
