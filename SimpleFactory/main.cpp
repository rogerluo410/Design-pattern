#include <cstdlib>
#include <iostream>
#include "SimpleFactory.h"
#include "ConcreteSimpleFactory.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"Hi,dear friend,what kind of fruit would you like to eat ?"<<endl;
    cout<<"Choose apple,plz input 1 , choose orange,plz input 2, and choose pear plz input 3."<<endl;
    cout<<"Otherwise,if you input a number that isn't bewteen 1-3,i will give you a apple:)"<<endl;
    int i;
    cin>>i;
    //create a factory
    SimpleFactory* pSinFcty=new ConcreteSimpleFactory;
    Product* pPdt=pSinFcty->CreateProduct(i);
    char strOut[20];
    sprintf(strOut,"Now,you get a %s\n",pPdt->SelfIntroduce());
    cout<<strOut<<endl;
    delete pSinFcty;
    delete pPdt;
    system("PAUSE");
    return EXIT_SUCCESS;
}
