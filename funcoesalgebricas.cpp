#include <iostream>
#include <vector>
#include "algebra.h"
using namespace std;

void imprime(double R[2]);
void imprime3(double R[3]);

int main(){

int tam=2;
double V[tam]= {1,2},U[tam]={3,4};

cout<<"Vetor V= ";
imprime(V);

cout<<"Vetor U= ";
imprime(U);

algebra *operador= new algebra();

operador->setsoma(V,U);
cout<<"V+U=";
imprime(operador->soma);

operador->setMescalar(V,3);
cout<<"3*V=";
imprime(operador->Mescalar);


operador->setprodutointerno(V,U);
cout<<"V*U= "<<operador->produtointerno<<endl;

cout<<"V x U= ";
operador->setprodutovetorial(V,U);
if(tam==3){
 imprime3(operador->produtovetorial);
}


}

void imprime(double R[2]){
cout<<"[";
for(int i=0;i<2;i++){
    cout<<R[i]<<"\t";
}
cout<<"]"<<endl;

}

void imprime3(double R[3]){
cout<<"[";
for(int i=0;i<3;i++){
    cout<<R[i]<<"\t";
}
cout<<"]"<<endl;

}
