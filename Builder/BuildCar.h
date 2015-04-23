#ifndef _BUILDCAR_H_
#define _BUILDCAR_H_

class Component;
class Car
{
  public:
         virtual ~Car(){}
         virtual Car* GetCar(Component*,Component*,Component*)=0;
  protected:
         Car(){}
         virtual void UseWheel(Component*)=0;
         virtual void UseChassis(Component*)=0;
         virtual void UseShell(Component*)=0;
  private:
                            
};


class BenzCar:public Car
{
  public:
         virtual ~BenzCar(){}
         BenzCar(){}
         Car* GetCar(Component*,Component*,Component*);
  protected:      
         void UseWheel(Component*);
         void UseChassis(Component*);
         void UseShell(Component*);
  private:
                            
};

class BMWCar:public Car
{
  public:
         virtual ~BMWCar(){}
         BMWCar(){}
         Car* GetCar(Component*,Component*,Component*);
  protected:
         void UseWheel(Component*);
         void UseChassis(Component*);
         void UseShell(Component*);
  private:
                            
};

class AudiCar:public Car
{
  public:
         virtual ~AudiCar(){}
         AudiCar(){}
         Car* GetCar(Component*,Component*,Component*);
  protected:        
         void UseWheel(Component*);
         void UseChassis(Component*);
         void UseShell(Component*);
  private:
                            
};



#endif //_BUILDCAR_H_
