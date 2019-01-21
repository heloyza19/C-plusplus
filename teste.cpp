#include <iostream>
#include "linearAlgebra.cpp"

using namespace std;

int main(){

int tam=3;
double A[3]={1, 2,3};
double B[3]={7, 5, 13};

cout<<"A= [";
for(int i=0;i<tam;i++){
 cout<<A[i]<<"\t";
}
cout<<"]"<<endl;

cout<<"B= [";
for(int i=0;i<tam;i++){
 cout<<B[i]<<"\t";
}
cout<<"]"<<endl;

vetor *U= new vetor(tam);
U->setV(A);
double *vetor1=U->getV();

vetor *V= new vetor(tam);
V->setV(B);
double *vetor4=V->getV();

linearAlgebra *L = new linearAlgebra();

//teste soma
vetor *T=L->add(U,V);
double *vetor2=T->getV();

cout<<"\nA + B = [ ";
for(int i=0;i<tam;i++){
   cout<<*(vetor2+i)<<"\t";;
}
cout<<"]\n";



//teste produto vetorial

vetor *W=L->crossproduct(U, V);
double *vetor3=W->getV();

cout<<"A X B = [ ";

for(int i=0;i<tam;i++){
   cout<<*(vetor3+i)<<"\t";;
}
cout<<"]\n";




//teste produto interno
double a=L->dotproduct(U,V);
cout<<"A.B = "<<a<<endl;


return 0;
}
