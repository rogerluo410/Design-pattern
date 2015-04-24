#ifndef _CAR_H_
#define _CAR_H_
#include <cstdlib>
#include <iostream>

using namespace std;


class car
{ 
  public:
         virtual ~car();
         virtual void drive()=0;
  protected:
          car();  
  private:
              
};

class truck:public car
{
  public:
        ~truck();
        truck();
         void drive();
  protected:
         
  private:
          
      
};

class decorator:public car
{
  public:
        ~decorator();
         void drive()=0;
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



#endif //_CAR_H_
