#ifndef _CONCRETECOMPONENT_H_
#define _CONCRETECOMPONENT_H_
#include "Component.h"


//wheel class begin
class Wheel:public Component
{
  public:
        virtual ~Wheel(){}   
        virtual void SelfIntroduce()=0;    
  protected:    
        Wheel(){}  
  private:
              
};


//concrete  wheel
class CobraWheel:public Wheel
{
   public:
        ~CobraWheel(){}
         CobraWheel(){}
         void SelfIntroduce(){ cout<<"Im CobraWheel"<<endl; }
   protected:
             
   private:   
      
};

class CarrWheel:public Wheel
{
   public:
        ~CarrWheel(){}
         CarrWheel(){}
         void SelfIntroduce(){ cout<<"Im CarrWheel"<<endl; }
   protected:
             
   private:   
      
};

class BlitzWheel:public Wheel
{
    public:
           ~BlitzWheel(){}      
           BlitzWheel(){}
           void SelfIntroduce(){ cout<<"Im BlitzWheel"<<endl; }
    protected:
              
    private:             
};
//wheel class end

//Chassis class start
class Chassis:public Component
{
  public:
      virtual ~Chassis(){}     
      virtual void SelfIntroduce()=0;
  protected:
      Chassis(){}      
  private:                
      
};


class JuniorChassis:public Chassis
{
  public:
        ~JuniorChassis(){}   
        JuniorChassis(){}  
        void SelfIntroduce(){ cout<<"Im JuniorChassis"<<endl; }
  protected:
                       
  private:    
      
};

class IntermediateChassis:public Chassis
{
   public:   
        ~IntermediateChassis(){}
        IntermediateChassis(){}
        void SelfIntroduce(){ cout<<"Im IntermediateChassis"<<endl; }
   protected:
             
   private:
                        
};

class SeniorChassis:public Chassis
{
  public:    
      ~SeniorChassis(){}
      SeniorChassis(){}
      void SelfIntroduce(){ cout<<"Im SeniorChassis"<<endl; }
  protected:
            
  private:
                        
};
//Chassis class end

//Shell class begin
class Shell:public Component
{
   public:
          ~Shell(){}
          virtual void SelfIntroduce()=0;
   protected:          
           Shell(){}
   private:
              
};

class AShell:public Shell
{
  public:
        ~AShell(){}
        AShell(){}
        void SelfIntroduce(){ cout<<"Im AShell"<<endl; }
  protected:
            
  private:
                 
};

class BShell:public Shell
{
  public:
        ~BShell(){}
        BShell(){}
        void SelfIntroduce(){ cout<<"Im BShell"<<endl; }
  protected:
            
  private:
};

class CShell:public Shell
{
  public:
        ~CShell(){}
        CShell(){}
        void SelfIntroduce(){ cout<<"Im CShell"<<endl; }
  protected:
            
  private:
};
//Shell class end


#endif //_CONCRETECOMPONENT_H_
