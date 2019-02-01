#include "matriz.h"




matriz::matriz(int l, int c){
Size[0]=l;
Size[1]=c;
M=new double*[l];
for ( int i=0; i<l; i++ )
{
M[i] =new double [c];
}
}


int* matriz::getsize(){
return Size;
}


void matriz::setM(double** M1)
{
M=M1;

}

double** matriz::getM(){
return M;
}

void matriz::print(){
std::cout<<std::endl;
for (int i=0;i<Size[0];i++){
for (int j=0;j<Size[1];j++){
std::cout<<*(*(M+i)+j)<<"\t";
}
std::cout<<std::endl;
}
}

//Sobrecarga do igual
void matriz::operator =(const matriz &A) //const
{

this->Size[0]=A.Size[0];
this->Size[1]=A.Size[1];

double** matriz1= new double*[A.Size[0]];
for (int i=0;i<A.Size[0];i++)
{
*(matriz1 +i)= new double[A.Size[1]];
}

for (int i=0;i<A.Size[0];i++)
{
for(int j=0;j<A.Size[1];j++){

*(*(matriz1+i)+j)=*(*(A.M+i)+j);

}
}

this->setM(matriz1);
}

//Construtor de copia
matriz (const matriz &A)
{
this->Size[0]=A.Size[0];
this->Size[1]=A.Size[1];

double** m=new double*[A.Size[0]];
for (int i=0; i<A.Size;i++)
{
*(m+i)=new double[A.Size[1]];
}

for (int i=0;i<A.Size[0];i++)
{
for(int j=0;j<A.Size[1];j++){
*(*(m+i)+j)=A[i][j];

}}



}