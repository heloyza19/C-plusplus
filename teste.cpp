#include <iostream>
#include "linearAlgebra.cpp"

using namespace std;

int main(){

int tam=3;
double* A=new double[tam]{1,2,3};
double* B=new double [tam]{7, 5, 13};

//v1.setAs(C);

vetor *U= new vetor(tam);
U->setV(A);
double *vetor1=U->getV();

cout<<"A= [";
for(int i=0;i<tam;i++){
   cout<<*(vetor1+i)<<"\t";
}
cout<<"]\n";

vetor *V= new vetor(tam);
V->setV(B);
double *vetor2=V->getV();

cout<<"B= [";
for(int i=0;i<tam;i++){
   cout<<*(vetor2+i)<<"\t";
}
cout<<"]\n";

linearAlgebra *L = new linearAlgebra();

//teste soma

vetor* T=new vetor();
T=L->add(U,V);

double *vetor3=T->getV();

cout<<"\nA + B = [ ";
for(int i=0;i<tam;i++){
   cout<<*(vetor3+i)<<"\t";;
}
cout<<"]\n";

//Multiplicação por escalar
vetor* P=new vetor();
P=L->produto(2,V);
double* vetor4=P->getV();
cout<<"\n2* B = [ ";
for(int i=0;i<tam;i++){
   cout<<*(vetor4+i)<<"\t";;
}
cout<<"]\n";

//teste produto vetorial

vetor *W=L->crossproduct(U, V);
double *vetor5=W->getV();

cout<<"A X B = [ ";

for(int i=0;i<tam;i++){
   cout<<*(vetor5+i)<<"\t";;
}
cout<<"]\n";


//teste produto interno
double a=L->dotproduct(U,V);
cout<<"A.B = "<<a<<endl;

return 0;
}
