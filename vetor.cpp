#include "vetor.h"
using namespace std;


vetor::vetor(int t)
{
Size=t;
double* V=new double[t];
}


vetor::~vetor()
{
delete []V;
}

/*
//Construtor de copia
vetor (const vetor &A)
{

this->Size=A.Size;

for (int i=0; i<A.Size;i++)
{
(this->V)[i]=A.V[i];
}
}

*/
void vetor::print()
{
cout<<"=[";
for(int i=0; i<Size;i++)
{
cout<<*(V+i)<<" ";
}
cout<<"]\n";
}

void vetor::setV(double* A)
{
V=A;
}


double* vetor::getV()
{
    return V;
}



int vetor::getsize()
{
return Size;
}

/*
//Sobrecarga do igual
void* vetor::operator =(const  vetor &A)
{
this.Size=A.getsize();
for (int i=0;i<A->Size;i++)
{
this.V[i]=A.V[i];
}
return this;
}


//Sobrecarga do igual
//Construtor de cópia-
//Por que usar o const na sobrecarga do operador
/*
vetor vetor::operator + (vetor A){

if(A.getsize()==this->getsize()){
    vetor C(A.getsize());
    for(int i=0;i<A.getsize();i++)
    {
     *(C.V+i)=*(this->V+i)+ *(A.V+i);
    }
    return C;
} else{
std::cerr<<"vetores com tamanhos diferentes"<<std::endl;
}


}
*/