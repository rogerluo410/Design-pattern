/*
  Desc: A concrete product class

*/
#ifndef _CONCRETEPRODUCT_H_
#define _CONCRETEPRODUCT_H_
#include "Product.h"

class Apple:public Product
{
  public:
          Apple::Apple():Product(){ cout<<"Apple::Constructor"<<endl; }   
          Apple::~Apple(){ cout<<"Apple::Destructor"<<endl; }
          virtual char* SelfIntroduce(){ return "Apple"; }
  protected:
  
  private:        
};

class Orange:public Product
{
  public:
          Orange::Orange(){ cout<<"Orange::Constructor"<<endl; }   
          Orange::~Orange(){ cout<<"Orange::Destructor"<<endl; }
          virtual char* SelfIntroduce(){ return "Orange"; }
  protected:
  
  private:        
};

class Pear:public Product
{
  public:
          Pear::Pear(){ cout<<"Pear::Constructor"<<endl; }   
          Pear::~Pear(){ cout<<"Pear::Destructor"<<endl; }
          virtual char* SelfIntroduce(){ return "Pear"; }
  protected:
  
  private:        
};

#endif //_CONCRETEPRODUCT_H_
