#include <iostream>

#include "linearAlgebra.cpp"

using namespace std;

int main(){
int l=3, c=3;
int L=3, C=3;

//matriz 1
double m[l][c];
double m2[L][C];

for (int i=0;i<l;i++)
{
for(int j=0;j<c;j++)
{
  m[i][j]=i+j;
}
}

cout<<"Matriz 1"<<endl;

for (int i=0;i<l;i++)
{
for(int j=0;j<c;j++)
{
  cout<<m[i][j]<<"\t";
}
cout<<endl;
}


for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
m2[i][j]=(i+1)*(j+1);
}
}

cout<<"\nMatriz 2"<<endl;

for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
cout<<m2[i][j]<<"\t";
}
cout<<endl;
}

//Transforma matriz 1 num vetor
int cont =0;
double mv[l*c];
double mv2[L*C];

for (int i=0;i<l;i++)
{
for(int j=0;j<c;j++)
{
  mv[cont]=m[i][j];
  cont ++;
}
}
cont=0;
for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
  mv2[cont]=m2[i][j];
  cont ++;
}
}

//cria a classe matriz (1)
matriz *Matriz=new matriz(l,c);
matriz *Matriz2=new matriz(L,C);

Matriz->setM(mv);
Matriz2->setM(mv2);

double** P=Matriz->getM();
double** P2=Matriz2->getM();


linearAlgebra *operacao= new linearAlgebra();

matriz *Msoma;
Msoma=operacao->add(Matriz,Matriz2);

double** s1=Msoma->getM();

cout<<"\nMatriz 1 + Matriz 2\n"<<endl;
for (int i=0;i<L;i++)
{
for(int j=0;j<C;j++)
{
cout<<*(*(s1+i)+j)<<"\t";
}
cout<<endl;
}



matriz *Mproduto;
Mproduto=operacao->produto(Matriz,Matriz2);

double** p1=Mproduto->getM();

cout<<"\n Matriz 1 * Matriz 2\n"<<endl;
for (int i=0;i<l;i++)
{
for(int j=0;j<C;j++)
{
cout<<*(*(p1+i)+j)<<"\t";
}
cout<<endl;
}

return 0;
}
