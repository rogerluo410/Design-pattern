#ifndef _CONCRETEFACTORIES_H_
#define _CONCRETEFACTORIES_H_
#include "AbstractFactory.h"
class ElementaryFactory:public AbstractFactory
{
  public:
        ElementaryFactory(){ cout<<"ElementaryFactory::Constructor"<<endl; }
        ~ElementaryFactory() { cout<<"ElementaryFactory::Destructor"<<endl; }
        AbstractMonster* ProductorA(){ return new MonsterA(Elementary); }
        AbstractMonster* ProductorB(){ return new MonsterB(Elementary); }
        AbstractMonster* ProductorC(){ return new MonsterC(Elementary); }
  protected:
       
  private:
                     
};

class IntermediateFactory:public AbstractFactory
{
  public:
        IntermediateFactory(){ cout<<"IntermediateFactory::Constructor"<<endl; }
        ~IntermediateFactory() { cout<<"IntermediateFactory::Destructor"<<endl; }
        AbstractMonster* ProductorA(){ return new MonsterA(Intermediate); }
        AbstractMonster* ProductorB(){ return new MonsterB(Intermediate); }
        AbstractMonster* ProductorC(){ return new MonsterC(Intermediate); }
  protected:
       
  private:
                     
};

class SeniorFactory:public AbstractFactory
{
  public:
        SeniorFactory(){ cout<<"SeniorFactory::Constructor"<<endl; }
        ~SeniorFactory() { cout<<"SeniorFactory::Destructor"<<endl; }
        AbstractMonster* ProductorA(){ return new MonsterA(Senior); }
        AbstractMonster* ProductorB(){ return new MonsterB(Senior); }
        AbstractMonster* ProductorC(){ return new MonsterC(Senior); }
  protected:
       
  private:
                     
};

class BtFactory:public AbstractFactory
{
  public:
        BtFactory(){ cout<<"BtFactory::Constructor"<<endl; }
        ~BtFactory() { cout<<"BtFactory::Destructor"<<endl; }
        AbstractMonster* ProductorA(){ return new MonsterA(Bt); }
        AbstractMonster* ProductorB(){ return new MonsterB(Bt); }
        AbstractMonster* ProductorC(){ return new MonsterC(Bt); }
  protected:
       
  private:
                     
};

#endif //#ifndef _CONCRETEFACTORIES_H_
