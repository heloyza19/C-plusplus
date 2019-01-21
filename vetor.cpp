#include "vetor.h"


vetor::vetor(int t)
{
setsize(t);
V=(double*)calloc(t,sizeof(double));
}


vetor::~vetor()
{
delete []V;
delete []&Size;
}


void vetor::setV(double A[])
{
for(int i=0;i<Size;i++){
 *(V+i)=A[i];
}
}

double* vetor::getV()
{
    return V;
}


void vetor::setsize(int t){
Size=t;
}

int vetor::getsize(){
return Size;
}


void vetor::setV(int i, double r){
*(V+i)=r;
}
