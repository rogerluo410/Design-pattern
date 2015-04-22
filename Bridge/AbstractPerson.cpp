#include "AbstractPerson.h"
#include "AbstractBridge.h"
Person::~Person()
{
   delete strName;
   delete strBornCity;              
}               

Person::Person(char* name,int high,int weight,int gender,int age ,char* bornCity)
{
   iHighCm=high;
   iWeightKg=weight;
   iGender=gender;
   iAge=age;
   try
   {               
   strName=new char[strlen(name)+1];
   strBornCity=new char[strlen(bornCity)+1];
   strcpy(strName,name); 
   strcpy(strBornCity,bornCity); 
   }
   catch(...)
   {
     delete strName;
     delete strBornCity;
     throw;              
   }             
}

Person::Person(Person& ps)
{
   iHighCm=ps.iHighCm;
   iWeightKg=ps.iWeightKg;
   iGender=ps.iGender;
   iAge=ps.iAge;
   try
   {               
   strName=new char[strlen(ps.strName)+1];
   strBornCity=new char[strlen(ps.strBornCity)+1];
   strcpy(strName,ps.strName); 
   strcpy(strBornCity,ps.strBornCity); 
   }
   catch(...)
   {
     delete strName;
     delete strBornCity;
     throw;              
   }                       
}


Person& Person::operator=(Person& ps)
{
   if(&ps==this)
   return *this;       
        
   if(this->strName!=NULL) delete strName;
   if(this->strBornCity!=NULL) delete strBornCity;
   
   iHighCm=ps.iHighCm;
   iWeightKg=ps.iWeightKg;
   iGender=ps.iGender;
   iAge=ps.iAge;
   try
   {               
   strName=new char[strlen(ps.strName)+1];
   strBornCity=new char[strlen(ps.strBornCity)+1];
   strcpy(strName,ps.strName); 
   strcpy(strBornCity,ps.strBornCity); 
   }
   catch(...)
   {
     delete strName;
     delete strBornCity;
     throw;              
   }                
}


void Person::SelfIntroduce()
{
     cout<<"Hi,My name is "<<strName<<endl
          <<"I'm "<<iAge<<" years old"<<endl
          <<"I was borned in "<<strBornCity<<endl;
}

RogerLuo::RogerLuo(char* name,int high,int weight,int gender,int age ,char* bornCity,Profession* pf):
                         Person(name,high,weight,gender,age,bornCity)
{
      setProfession(pf);                      
}                                                  

RogerLuo::~RogerLuo()
{
                     
}

void RogerLuo::setProfession(Profession* pProf)
{
   this->pProf=pProf;                                 
}

void RogerLuo::setCar(Car* pCar)
{
   this->pCar=pCar;                   
}


void RogerLuo::doProfession()
{
   pProf->doProfession();       
}

void RogerLuo::useCar()
{
   pCar->useCar();  
}     

                      
