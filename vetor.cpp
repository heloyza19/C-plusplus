#include "vetor.h"
using namespace std;

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


double* vetor::getV()
{
    return V;
}



int vetor::getsize()
{
return Size;
}


vetor* vetor::add(vetor* A, vetor* B){

 vetor *C=new vetor(A->getsize());

if(A->getsize()==B->getsize()){

    double *vetor1=A->getV();
    double *vetor2=B->getV();
    double s;
    double* c=new double[A->getsize()];
    for(int i=0;i<A->getsize();i++)
    {
     *(c+i)=*(vetor1+i)+ *(vetor2+i);
    //C->setV(i,s);
    }
    C->setV(c);
}
else
{
    std::cout<<"Vetores com tamanhos diferentes"<<std::endl;
}
 return C;
}

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
