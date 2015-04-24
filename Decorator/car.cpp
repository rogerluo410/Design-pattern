#include "car.h"

car::~car()
{
           
}

car::car()
{
           
}

truck::~truck()
{
             
}

truck::truck()
{
            
}

void truck::drive()
{
  cout<<"I'm driving..."<<endl;             
}

decorator::~decorator()
{
                       
}

decorator::decorator()
{
                       
}


TruckDecorator::~TruckDecorator()
{

}

TruckDecorator::TruckDecorator(car* pCar)
{
  this->pCar=pCar;
}

void TruckDecorator::drive()
{
      pCar->drive();
      addedBehavior();                
}

void TruckDecorator::addedBehavior()
{
 cout<<"Ooh,I have to transport goods..."<<endl;                              
}

