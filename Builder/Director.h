#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_
class Car;
class Component;
class Director
{
  public:    
      Director(){}
      ~Director(){}
      void Constructor(Car*,Component*,Component*,Component* );
  protected:
            
  private:
       Car* pCar;                 
};









#endif //_DIRECTOR_H_
