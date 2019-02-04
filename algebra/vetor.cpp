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