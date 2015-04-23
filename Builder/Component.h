#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include <cstdlib>
#include <iostream>

using namespace std;


class Component
{
  public:
        virtual ~Component(){}
        virtual void SelfIntroduce()=0;
  protected:    
        Component(){}
  private:
              
};


#endif //_COMPONENT_H_
