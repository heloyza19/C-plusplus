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


//Sobrecarga do igual
void vetor::operator =(const vetor &A) //const
{

this->Size=A.Size;

double* vetor1= new double[A.Size];
for (int i=0;i<A.Size;i++)
{
*(vetor1+i)=*(A.V+i);
}
this->setV(vetor1);

}


//Sobrecarga do igual
//Construtor de cópia-
//Por que usar o const na sobrecarga do operador



//Construtor de copia
vetor::vetor (const vetor &A)
{
this->Size=A.Size;
double* c=new double[A.Size];
for (int i=0; i<A.Size;i++)
{
*(c+i)=A.V[i];
}
this->setV(c);
}

vetor vetor::operator + (vetor &A){
if(A.Size==this->Size){
    vetor C(A.Size);
    double* c=new double[A.Size];

    for(int i=0;i<A.Size;i++)
    {
     *(c+i)=this->V[i]+ A.V[i];
    }

    C.setV(c);

    return C;
} else{
std::cerr<<"vetores com tamanhos diferentes"<<std::endl;
}
}

vetor vetor::operator - (vetor &A){
if(A.Size==this->Size){
    vetor C(A.Size);
    double* c=new double[A.Size];

    for(int i=0;i<A.Size;i++)
    {
     *(c+i)=this->V[i]- A.V[i];
    }

    C.setV(c);

    return C;
} else{
std::cerr<<"vetores com tamanhos diferentes"<<std::endl;
}
}

