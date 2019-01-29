#include "vetor.h"


vetor::vetor(int t)
{
Size=t;
double* V=new double[t];
}
vetor::vetor(){
};

vetor::~vetor()
{
delete []V;
delete []&Size;
}


void vetor::setV(double* A)
{
V=A;
}

//Modificar
void vetor::setV(int i, double r){
*(V+i)=r;
}
//

double* vetor::getV()
{
    return V;
}



int vetor::getsize()
{
return Size;
}


/*
vetor* vetor::operator +(vetor* A)
{
vetor* B=new vetor(this->getsize());
B->setV(this->getV());
vetor *C=new vetor(A->getsize());

if (A->getsize()==B->getsize()){
    double *vetor1=A->getV();
    double *vetor2=B->getV();

    double s;
    for(int i=0;i<A->getsize();i++)
    {
     s=*(vetor1+i)+ *(vetor2+i);
    C->setV(i,s);
    }
}
else
{
    std::cout<<"Vetores com tamanhos diferentes"<<std::endl;
}

 return C;


}

*/
