#include "linearAlgebra.h"

using namespace std;

linearAlgebra::linearAlgebra(){

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
}
else
{
    cout<<"Vetores com tamanhos diferentes"<<endl;

    vetor *C=new vetor(A->Size);
    return C;
}
}




vetor* linearAlgebra::crossproduct(vetor* A, vetor* B)
{
vetor *C=new vetor(A->Size);

if(A->Size==B->Size && A->Size==3)
{
    double *vetor1=A->getV();
    double *vetor2=B->getV();
    double c[A->Size];

    c[0]=(vetor1[1]*vetor2[2])-(vetor1[2]*vetor2[1]);
    c[1]=(vetor1[2]*vetor2[0])-(vetor1[0]*vetor2[2]);
    c[2]=(vetor1[0]*vetor2[1])-(vetor1[1]*vetor2[0]);

    C->setV(c);

    return C;
}
else
{
    cout<<"Vetores com tamanhos diferentes"<<endl;
    return C;
}

}




double linearAlgebra::dotproduct(vetor* A, vetor* B)
{

if(A->Size==B->Size)
{
    double *vetor1=A->getV();
    double *vetor2=B->getV();
    double c=0;

    for(int i=0;i<A->Size;i++)
    {
       c=c+vetor1[i]*vetor2[i];
    }

    return c;
}
else
{
    cout<<"Vetores com tamanhos diferentes"<<endl;
    return 0;
}
}



matriz* linearAlgebra::add(matriz* A,matriz* B)
{
double** M1=A->getM();
double** M2=B->getM();
double s;

matriz *soma=new matriz(A->getsize()[0],A->getsize()[1]);

if(((A->getsize()[0])==(B->getsize()[0]) )&& ((A->getsize()[1])==(B->getsize()[1])))
{
    for(int i=0;i<A->getsize()[0];i++)
    {
    for (int j=0;j<A->getsize()[1];j++)
    {
        s=*(*(M1+i)+j)+*(*(M2+i)+j);
        soma->setM(i,j,s);
    }
    }
    return soma;
}

else
{
    cout<<"Os requisitos para a soma de matrizes nao foram obedecidos."<<endl;
    return soma;
}

}


matriz* linearAlgebra::produto(matriz* A,matriz* B)
{
matriz *produto=new matriz(A->getsize()[0],B->getsize()[1]);
if(A->getsize()[1]==B->getsize()[0])      //numero de colunas em A == numero de colunas em B
{

double** Ma=A->getM();
double** Mb=B->getM();
//corrigir equação
double p=0;

  for(int i=0;i<A->getsize()[0];i++)  //tamanho das linhas da nova matriz
  {
  for(int j=0;j<B->getsize()[1];j++)    //colunas da nova matriz
  {
        p=0;
  for (int k=0; k<A->getsize()[1];k++)   //linhas da matriz antiga
  {
        p+=  (*(*(Ma+i)+k)) * (*(*(Mb+k)+j));

  }
    produto->setM( i,j,p);
  }

  }
  }else{
std::cout<<"os requisitos para a multiplicacao nao foram cumpridos"<<std::endl;
}

return produto;

}


