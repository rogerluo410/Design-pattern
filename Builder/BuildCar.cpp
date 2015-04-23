#include "BuildCar.h"
#include "ConcreteComponent.h"

//BENZ
Car* BenzCar::GetCar(Component* pWheel,Component* pChassis,Component*pShell)
{
       cout<<"Im a Benz Car"<<endl;
       UseWheel(pWheel);
       UseChassis(pChassis);
       UseShell(pShell);
}


void BenzCar::UseWheel(Component* pWheel)
{
     pWheel->SelfIntroduce();
}

void BenzCar::UseChassis(Component* pChassis)
{
     pChassis->SelfIntroduce();
}

void BenzCar::UseShell(Component* pShell)
{
     
     pShell->SelfIntroduce();
}


//BMW
Car* BMWCar::GetCar(Component* pWheel,Component* pChassis,Component*pShell)
{
       cout<<"Im a BMW Car"<<endl;
       UseWheel(pWheel);
       UseChassis(pChassis);
       UseShell(pShell);
}


void BMWCar::UseWheel(Component* pWheel)
{
      pWheel->SelfIntroduce();
     
}

void BMWCar::UseChassis(Component* pChassis)
{
     
     pChassis->SelfIntroduce();
}

void BMWCar::UseShell(Component* pShell)
{
      pShell->SelfIntroduce();
     
}


//Audi
Car* AudiCar::GetCar(Component* pWheel,Component* pChassis,Component*pShell)
{
       cout<<"Im a Audi Car"<<endl;
       UseWheel(pWheel);
       UseChassis(pChassis);
       UseShell(pShell);
}


void AudiCar::UseWheel(Component* pWheel)
{
     pWheel->SelfIntroduce();
     
}

void AudiCar::UseChassis(Component* pChassis)
{
     pChassis->SelfIntroduce();
     
}

void AudiCar::UseShell(Component* pShell)
{
     pShell->SelfIntroduce();
     
}
