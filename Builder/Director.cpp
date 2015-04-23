#include "Director.h"
#include "ConcreteComponent.h"
#include "BuildCar.h"


void Director::Constructor(Car* pCar,Component* pWheel,Component* pChassis,Component* pShell)
{
      pCar->GetCar(pWheel,pChassis,pShell);
}
