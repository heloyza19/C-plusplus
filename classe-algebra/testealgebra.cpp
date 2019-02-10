#include <iostream>
#include <stdio.h>
#include "linearAlgebra.cpp"
using namespace std;

int main ()
{
double v[3]={1,2,3};
vetor V(3);
V.setV(v);
V.print();

double u[3]={10, 9,5};
vetor U(3);
U.setV(u);
U.print();

linearAlgebra *L=new linearAlgebra();
vetor Z=L->add(U,V);


for(int i=0;i<5000000;i++)
{
Z=L->add(U,V);
//vetor Z(3);
}





//system("PAUSE");
return 0;
}
