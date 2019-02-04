#include <iostream>
#include "matriz.cpp"
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

matriz Mat (l,c);
Mat.setM(M1);
cout<<"Matriz 1=";
Mat.print();


matriz Mat2(L,C);
Mat2.setM(M2);
cout<<"Matriz 2=";
Mat2.print();


matriz Mat3(L,C);
Mat3=Mat+Mat2;
cout<<"Matriz 1 + Matriz 2 =";
Mat3.print();

matriz Mat4(L,C);
Mat4=Mat-Mat2;
cout<<"Matriz 1 - Matriz 2 =";
Mat4.print();

matriz Mat5=Mat*Mat2;
cout<<"Matriz 1 * Matriz 2 =";
Mat5.print();


matriz Mat6=Mat*2;
cout<<"Matriz 1 * 2=";
Mat6.print();


return 0;
}
