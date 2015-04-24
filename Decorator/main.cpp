#include <cstdlib>
#include <iostream>

using namespace std;

#include "car.h"
int main(int argc, char *argv[])
{
    car* pCar=new truck;
    decorator* pDcr=new TruckDecorator(pCar);
    pDcr->drive();
    cout<<"--------";
    pCar->drive();
    system("PAUSE");
    return EXIT_SUCCESS;
}
