#ifndef _CONCRETEMONSTERS_H_
#define _CONCRETEMONSTERS_H_
#include "AbstractMonster.h"
class MonsterA:public AbstractMonster
{
  public:
        MonsterA(int i):AbstractMonster(i){ cout<<"MonsterA::Constructor"<<endl; } 
        ~MonsterA(){ cout<<"MonsterA::Destructor"<<endl; }
        void SelfIntroduce()
        {
          cout<<"Name:MonsterA"<<endl;
          cout<<"BloodVolume:"<<uBloodVolume<<endl;   
          cout<<"AttackDamage:"<<uAttackDamage<<endl; 
          cout<<"AttackSpeed:"<<uAttackSpeed<<endl; 
          cout<<"Defence:"<<uDefence<<endl;   
        }    
  protected:
            
  private:     
};

class MonsterB:public AbstractMonster
{
  public:
        MonsterB(int i):AbstractMonster(i){ cout<<"MonsterB::Constructor"<<endl; } 
        ~MonsterB(){ cout<<"MonsterB::Destructor"<<endl; }  
         void SelfIntroduce()
        {
          cout<<"Name:MonsterB"<<endl;
          cout<<"BloodVolume:"<<uBloodVolume<<endl;   
          cout<<"AttackDamage:"<<uAttackDamage<<endl; 
          cout<<"AttackSpeed:"<<uAttackSpeed<<endl; 
          cout<<"Defence:"<<uDefence<<endl;   
        }   
  protected:
            
  private:     
};

class MonsterC:public AbstractMonster
{
  public:
        MonsterC(int i):AbstractMonster(i){ cout<<"MonsterC::Constructor"<<endl; } 
        ~MonsterC(){ cout<<"MonsterC::Destructor"<<endl; } 
         void SelfIntroduce()
        {
          cout<<"Name:MonsterC"<<endl;
          cout<<"BloodVolume:"<<uBloodVolume<<endl;   
          cout<<"AttackDamage:"<<uAttackDamage<<endl; 
          cout<<"AttackSpeed:"<<uAttackSpeed<<endl; 
          cout<<"Defence:"<<uDefence<<endl;   
        }    
  protected:
            
  private:     
};


#endif //_CONCRETEMONSTERS_H_
