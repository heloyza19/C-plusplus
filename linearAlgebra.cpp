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
return C;
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
   c+=vetor1[i]*vetor2[i];
}

return c;
}else
{
cout<<"Vetores com tamanhos diferentes"<<endl;
return 1;
}
}
