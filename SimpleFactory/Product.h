/*
  Desc: An abstract product class

*/
#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include <cstdlib>
#include <iostream>
using namespace std;
class Product
{
  public:
         virtual ~Product(){ cout<<"Product::Destructor"<<endl; }
         virtual char* SelfIntroduce()=0;
  protected:
         Product(){ cout<<"Product::Constructor"<<endl; }
  private:    
};
#endif //_PRODUCT_H_
