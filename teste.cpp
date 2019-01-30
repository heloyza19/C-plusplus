#include <iostream>
#include "vetor.cpp"

using namespace std;

int main(){

int tam=3;
double* A=new double[tam]{1,2,3};
double* B=new double [tam]{7, 5, 13};

vetor U=new vetor(tam);
U->setV(A);
double *vetor1=U->getV();

cout<<"A= [";
for(int i=0;i<tam;i++){
   cout<<*(vetor1+i)<<"\t";
}
cout<<"]\n";

vetor V=new vetor(tam);
V->setV(B);
double *vetor2=V->getV();


return 0;
}

