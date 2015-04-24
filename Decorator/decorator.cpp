#include "decorator.h"


decorator::~decorator()
{
                       
}

TruckDecorator::~TruckDecorator()
{

}

TruckDecorator::TruckDecorator(car* pCar)
{
  this->pCar=pCar;
}

TruckDecorator::drive()
{
      pCar->drive();
      addedBehavior();                
}

TruckDecorator::addedBehavior()
{
 cout<<"Ooh,I have to transport goods..."<<endl;                              
}
