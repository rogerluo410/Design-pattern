#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "car.h"
class decorator:public car
{
  public:
        ~decorator();
        virtual void drive()=0;
  protected:
         decorator();    
  private:
              
};


class TruckDecorator:public decorator
{
  public:
         ~TruckDecorator();
         TruckDecorator(car*);
         void drive();
         void addedBehavior();
  protected:
            
  private:
        car* pCar;  
              
};



#endif //_DECORATOR_H_
