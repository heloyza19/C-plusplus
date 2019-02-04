#include <iostream>
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
Z.print();


system("PAUSE");
return 0;

}