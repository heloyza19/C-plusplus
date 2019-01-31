#include <iostream>
#include "vetor.cpp"

using namespace std;

int main(){


int tam=3;
double* A=new double[tam]{1,2,3};
double* B=new double [tam]{7, 5, 13};


vetor U=(tam);
U.setV(A);
double *vetor1=U.getV();

cout<<"U";
U.print();

vetor V(tam);
V.setV(B);
double *vetor2=V.getV();

cout<<"V";
V.print();


vetor C=U+V;



return 0;
}

