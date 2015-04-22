#include <cstdlib>
#include <iostream>
#include "AbstractPerson.h"
#include "AbstractBridge.h"
using namespace std;

int main(int argc, char *argv[])
{
    Profession* pPf=new SoftwareEngineer;
    Person* pPrs=new RogerLuo("Roger",180,75,0,25,"Wuhan",pPf);
    pPrs->SelfIntroduce();
    pPrs->doProfession();
    delete pPf;
    delete pPrs;
    system("PAUSE");
    return EXIT_SUCCESS;
}
