#include <iostream>
#include "linearAlgebra.cpp"

using namespace std;

int main(){

int tam=4;
double A[tam]={1, 2,3,4};

vetor *U= new vetor(tam);
U->setV(A);
double *vetor1=U->getV();

linearAlgebra *L = new linearAlgebra();

//teste soma
vetor *T=L->add(U,U);
double *vetor2=T->getV();

cout<<"soma=[ ";
for(int i=0;i<tam;i++){
   cout<<*(vetor2+i)<<"\t";;
}
cout<<"]\n";



//teste produto vetorial

vetor *W=L->crossproduct(U, U);
double *vetor3=W->getV();

cout<<"Produto vetorial=[ ";

for(int i=0;i<tam;i++){
   cout<<*(vetor3+i)<<"\t";;
}
cout<<"]\n";




//teste produto interno
double a=L->dotproduct(U,U);
cout<<"Produto interno= "<<a<<endl;


return 0;
}
