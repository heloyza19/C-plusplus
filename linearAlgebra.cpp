#include "linearAlgebra.h"

using namespace std;

linearAlgebra::linearAlgebra(){
cout<<"teste"<<endl;
}

vetor* linearAlgebra::add(vetor* A, vetor* B){
if(A->Size==B->Size){
double *vetor1=A->getV();
double *vetor2=B->getV();
double c[A->Size];

vetor *C=new vetor(A->Size);

for(int i=0;i<A->Size;i++){
 c[i]=*(vetor1+i)+ *(vetor2+i);
}

C->setV(c);

return C;

}else {
cout<<"Vetores com tamanhos diferentes"<<endl;

vetor *C=new vetor(A->Size);
return C;
}
}




vetor* linearAlgebra::crossproduct(vetor* A, vetor* B){
if(A->Size==B->Size && A->Size==3){

double *vetor1=A->getV();
double *vetor2=B->getV();
vetor *C=new vetor(A->Size);
double c[A->Size];

c[0]=(vetor1[1]*vetor2[2])-(vetor1[2]*vetor2[1]);
c[1]=(vetor1[2]*vetor2[0])-(vetor1[0]*vetor2[2]);
c[2]=(vetor1[0]*vetor2[1])-(vetor1[1]*vetor2[0]);

C->setV(c);

return C;
}else{
vetor *C=new vetor(A->Size);
cout<<"Vetores com tamanhos diferentes"<<endl;

//return C;
}
}




double linearAlgebra::dotproduct(vetor* A, vetor* B)
{

if(A->Size==B->Size){

double *vetor1=A->getV();
double *vetor2=B->getV();
double c=0;

for(int i=0;i<A->Size;i++)
{
   c=c+vetor1[i]*vetor2[i];
}

return c;
}else
{
cout<<"Vetores com tamanhos diferentes"<<endl;
return 1;
}
}



matriz* linearAlgebra::add(matriz* A,matriz* B){
double** M1=A->getM();
double** M2=B->getM();
double s;
if(((A->getsize()[0])==(B->getsize()[0]) )&& ((A->getsize()[1])==(B->getsize()[1])))
{
matriz *soma=new matriz(A->getsize()[0],A->getsize()[1]);
for(int i=0;i<A->getsize()[0];i++)
{
for (int j=0;j<A->getsize()[1];j++)
{
    s=*(*(M1+i)+j)+*(*(M2+i)+j);
    soma->setM(i,j,s);
}
return soma;
}
/*
else
{
matriz *soma=new matriz(A->getsize()[0],A->getsize()[1]);
cout<<"Os requisitos para a soma de matrizes não foram obedecidos."<<endl;
return soma;
}
*/

}
}

matriz* linearAlgebra::produto(matriz* A,matriz* B){


if(A->getsize()[0]==B->getsize()[1]){  //numero de colunas em A == numero de colunas em B
  matriz *produto=new matriz(A->getsize()[1],B->getsize()[1]);

  double** Ma=A->getM();
  double** Mb=B->getM();
//corrigir equação
double p=0;
  for(int j=0;j<B->getsize()[1];j++){
     p=0;
  for(int i=0;i<A->getsize()[1];i++){
    p+=(*(*(Ma+i)+j))*(*(*(Mb+j)+i));


  }
    produto->setM(j,i,p);
  }

return produto;
}

}


