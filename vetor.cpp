#include "vetor.h"


vetor::vetor(int t)
{
Size=t;
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
