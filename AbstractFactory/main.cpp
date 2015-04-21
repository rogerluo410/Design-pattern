#include <cstdlib>
#include <iostream>
#include "ConcreteFactories.h"
#include "ConcreteMonsters.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"Choose mode(0:Elementary ,1:Intermediate ,2:Senior , 3:Bt ):"<<endl;
    int i;
    cin>>i;
    //create factory
    AbstractFactory* pAbf=NULL;
    AbstractMonster* pAbm1=NULL;
    AbstractMonster* pAbm2=NULL;
    AbstractMonster* pAbm3=NULL;
    if(0==i)
    {
     pAbf=new ElementaryFactory;
     pAbm1=pAbf->ProductorA();
     pAbm1->SelfIntroduce();
     pAbm2=pAbf->ProductorB();
     pAbm2->SelfIntroduce();
     pAbm3=pAbf->ProductorC();
     pAbm3->SelfIntroduce();
    }
    else if(1==i)
    {
     pAbf=new IntermediateFactory;
     pAbm1=pAbf->ProductorA();
     pAbm1->SelfIntroduce();
     pAbm2=pAbf->ProductorB();
     pAbm2->SelfIntroduce();
     pAbm3=pAbf->ProductorC();
     pAbm3->SelfIntroduce();  
    }
    else if(2==i)
    {
     pAbf=new SeniorFactory;
     pAbm1=pAbf->ProductorA();
     pAbm1->SelfIntroduce();
     pAbm2=pAbf->ProductorB();
     pAbm2->SelfIntroduce();
     pAbm3=pAbf->ProductorC();
     pAbm3->SelfIntroduce(); 
    }
    else
    {
     pAbf=new BtFactory;
     pAbm1=pAbf->ProductorA();
     pAbm1->SelfIntroduce();
     pAbm2=pAbf->ProductorB();
     pAbm2->SelfIntroduce();
     pAbm3=pAbf->ProductorC();
     pAbm3->SelfIntroduce();   
    }
    delete pAbf;
    delete pAbm1;
    delete pAbm2;
    delete pAbm3;
    system("PAUSE");
    return EXIT_SUCCESS;
}
