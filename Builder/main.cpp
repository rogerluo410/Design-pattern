#include <cstdlib>
#include <iostream>
#include "Director.h"
#include "ConcreteComponent.h"
#include "BuildCar.h"
using namespace std;

int main(int argc, char *argv[])
{
    Component* pWheel = new CarrWheel;
    Component* pChassis = new IntermediateChassis;
    Component* pShell = new AShell;
    
    Car* pCar=new BenzCar;
    Director* pDir=new Director;
    pDir->Constructor(pCar,pWheel,pChassis,pShell);
    
    cout<<"------ Another one"<<endl;
    pWheel = new CobraWheel;
    pChassis = new SeniorChassis;
    pShell = new CShell;
    
    pCar=new AudiCar;
    pDir->Constructor(pCar,pWheel,pChassis,pShell);
    
    delete pWheel;
    delete pChassis;
    delete pShell;
    delete pCar;
    delete pDir;
    system("PAUSE");
    return EXIT_SUCCESS;
}
