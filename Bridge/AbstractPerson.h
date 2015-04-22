#ifndef _ABSTRACTPERSON_H_
#define _ABSTRACTPERSON_H_
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Profession;
class Car;
class Person
{
   public:
          virtual ~Person();
          virtual void doProfession()=0;
          void SelfIntroduce();
   protected:
          Person(char* name,int high,int weight,int gender,int age ,char* bornCity);   
          Person(Person&);
          Person& operator=(Person&);
   private:
          char* strName;
          int   iHighCm;
          int   iWeightKg;
          int   iGender;
          int   iAge;
          char* strBornCity;                     
};



class RogerLuo:public Person
{
   public:   
        ~RogerLuo();
        RogerLuo(char* name,int high,int weight,int gender,int age ,char* bornCity,Profession*);
        void setProfession(Profession*);
        void setCar(Car*);
        void doProfession();
        void useCar();
   protected:
             
   private:
         Profession* pProf;  
         Car* pCar;               
};







#endif //_ABSTRACTPERSON_H_
