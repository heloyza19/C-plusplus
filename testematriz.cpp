#include <iostream>
#include "linearAlgebra.cpp"
using namespace std;

int main(){
int l=3, c=3;
int L=3, C=3;

double **M1=new double*[l];
double **M2=new double*[l];

for (int i=0;i<l;i++)
{
    M1[i]=new double[c];
}

for (int i=0;i<L;i++)
{
    M2[i]=new double[C];
}


for (int i=0;i<l;i++)
{
for(int j=0;j<c;j++)
{
*(*(M1+i)+j)=(i+2)+j;
}
}

for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
*(*(M2+i)+j)=(i+2)*(j+1);
}
}

matriz* Mat=new matriz(l,c);
Mat->setM(M1);
double** matriz1 =Mat->getM();

matriz* Mat2=new matriz(L,C);
Mat2->setM(M2);
double** matriz2 =Mat2->getM();

cout<<"\nmatriz1= "<<endl;

for (int i=0;i<l;i++)
{
for(int j=0;j<c;j++)
{
cout<<*(*(matriz1+i)+j)<<"\t";
}
cout<<endl;
}

cout<<"\nmatriz2= "<<endl;

for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
cout<<*(*(matriz2+i)+j)<<"\t";
}
cout<<endl;
}

linearAlgebra* op= new linearAlgebra();


matriz* S=op->add(Mat,Mat2);
double** Ps=S->getM();

cout<<endl<<"Matriz 1 + Matriz 2= "<<endl;

for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
cout<<*(*(Ps+i)+j)<<"\t";
}
cout<<endl;
}

matriz* P=op->produto(Mat,Mat2);
double** Pp=P->getM();

cout<<endl<<"\nMatriz 1 * Matriz 2= "<<endl;

for (int i=0;i<l;i++)
{
for(int j=0;j<C;j++)
{
cout<<*(*(Pp+i)+j)<<"\t";
}
cout<<endl;
}


matriz* Q=op->produto(2,Mat2);
double** Pq=Q->getM();

cout<<endl<<"\n2 * Matriz 2= "<<endl;

for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
cout<<*(*(Pq+i)+j)<<"\t";
}
cout<<endl;
}



return 0;
}
