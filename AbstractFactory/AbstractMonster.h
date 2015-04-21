#ifndef _ABSTRACTMONSTER_H_
#define _ABSTRACTMONSTER_H_
#include <cstdlib>
#include <iostream>
using namespace std;
enum Level
{
  Elementary =0,
  Intermediate,
  Senior,
  Bt   
};
//Elementary
const int EleBloodVolume=1000;
const int EleAttackDamage=100;
const int EleAttackSpeed=50;
const int EleDefence=100;   

//Intermediate
const int IntBloodVolume=2000;
const int IntAttackDamage=200;
const int IntAttackSpeed=100;
const int IntDefence=200;   

//Senior
const int SenBloodVolume=3000; 
const int SenAttackDamage=300;
const int SenAttackSpeed=150;
const int SenDefence=300;   

//Bt
const int BtBloodVolume=4000;
const int BtAttackDamage=400;
const int BtAttackSpeed=200;
const int BtDefence=400;   


class AbstractMonster
{
  public:
         virtual ~AbstractMonster() { cout<<"AbstractMonster::Destructor"<<endl; }
         virtual void SelfIntroduce()=0;
  protected:
         AbstractMonster(){ cout<<"AbstractMonster::Constructor"<<endl; } 
         AbstractMonster(int level)
         { 
           cout<<"AbstractMonster::Constructor"<<endl; 
           init(level);
         }
         void init(int level)
         {
            switch(level)
            {
              case  Elementary:
                     {
                         uBloodVolume=EleBloodVolume;           
                         uAttackDamage=EleAttackDamage;
                         uAttackSpeed=EleAttackSpeed;
                         uDefence=EleDefence;
                     }
                     break;    
              case  Intermediate:
                     {
                         uBloodVolume=IntBloodVolume;           
                         uAttackDamage=IntAttackDamage;
                         uAttackSpeed=IntAttackSpeed;
                         uDefence=IntDefence;
                     }
                     break;    
              case  Senior:
                     {
                         uBloodVolume=SenBloodVolume;           
                         uAttackDamage=SenAttackDamage;
                         uAttackSpeed=SenAttackSpeed;
                         uDefence=SenDefence;
                     }
                     break;    
              case  Bt:
                     {
                         uBloodVolume=BtBloodVolume;           
                         uAttackDamage=BtAttackDamage;
                         uAttackSpeed=BtAttackSpeed;
                         uDefence=BtDefence;
                     }
                     break;  
               default:
                     {
                         uBloodVolume=EleBloodVolume;           
                         uAttackDamage=EleAttackDamage;
                         uAttackSpeed=EleAttackSpeed;
                         uDefence=EleDefence;
                     }                             
            }     
         } 
         unsigned int uBloodVolume;
         unsigned int uAttackDamage;               
         unsigned int uAttackSpeed;
         unsigned int uDefence;
  private:
         
};



#endif //_ABSTRACTMONSTER_H_
