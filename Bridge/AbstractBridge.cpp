#include "AbstractBridge.h"

Profession::~Profession()
{
                         
}

Profession::Profession()
{
                         
}

SoftwareEngineer::SoftwareEngineer()
{
  cout<<"software engineer."<<endl;                                   
}

SoftwareEngineer::~SoftwareEngineer()
{

}                                     

void SoftwareEngineer::doProfession()
{
     cout<<"I'm writing code."<<endl;                               
}

void SoftwareTester::doProfession()
{
      cout<<"I'm testing module"<<endl;
}

void ProjectManager::doProfession()
{
      cout<<"I'm arranging team memeber's work "<<endl;     
}


