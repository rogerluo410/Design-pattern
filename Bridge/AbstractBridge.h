#ifndef _ABSTRACTBRIDGE_H_
#define _ABSTRACTBRIDGE_H_

#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Profession
{
  public:
       virtual ~Profession();
       virtual void doProfession()=0;
  protected:
       Profession();    
  private:                     
};

class Car
{
  public:
       virtual ~Car();
       virtual void useCar()=0;
  protected:
       Car();    
  private:                     
       char* name;
};

class SoftwareEngineer:public Profession
{
  public:
       ~SoftwareEngineer();
        SoftwareEngineer();
        void doProfession();
  protected:
            
  private:
                          
};

class SoftwareTester:public Profession
{
  public:
       ~SoftwareTester(){};
        SoftwareTester(){ cout<<"software tester."<<endl;   };
        void doProfession();
  protected:
            
  private:
                          
};

class ProjectManager:public Profession
{
  public:
       ~ProjectManager(){};
        ProjectManager(){cout<<"project manager."<<endl;  };
        void doProfession();
  protected:
            
  private:
                          
};

#endif //_ABSTRACTBRIDGE_H_
