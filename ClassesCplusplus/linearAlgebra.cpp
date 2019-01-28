#include "linearAlgebra.h"


using namespace std;

linearAlgebra::linearAlgebra(){

}

vetor* linearAlgebra::add(vetor* A, vetor* B){

 vetor *C=new vetor(A->getsize());

if(A->getsize()==B->getsize()){

    double *vetor1=A->getV();
    double *vetor2=B->getV();
    double s;
    //double c[A->getsize()];

    for(int i=0;i<A->getsize();i++)
    {
     s=*(vetor1+i)+ *(vetor2+i);
    C->setV(i,s);
    }
    //C->setV(c);

}
else
{
    cout<<"Vetores com tamanhos diferentes"<<endl;
}

 return C;
}





