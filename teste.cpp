#include <iostream>
#include "vetor.cpp"

using namespace std;

int main(){


int tam=3;
double* A=new double[tam]{1,2,3};
double* B=new double [tam]{7, 5, 13};


vetor U(tam);
U.setV(A);
double *vetor1=U.getV();

cout<<"U";
U.print();

vetor V(tam);
V.setV(B);
double *vetor2=V.getV();

cout<<"V";
V.print();

vetor C(tam);
C=U+V;
cout<<"U+V";
C.print();

vetor D(tam);
D=U-V;
cout<<"U-V";
D.print();

double pe;
pe=U*V;
cout<<"U*V= "<<pe<<endl;

vetor pv=U.cross(V);
cout<<"U X V";
pv.print();

vetor me= U*2;
cout<<"2*U";
me.print();

return 0;
}

