#include <iostream>
//#include "matriz.cpp"
#include "linearAlgebra.cpp"

using namespace std;

int main(){
int l=2, c=3;

double m[l][c];

for (int i=0;i<l;i++){
for(int j=0;j<c;j++){
  m[i][j]=i+j;
}
}

int cont =0;
double mv[l*c];
for (int i=0;i<l;i++){
for(int j=0;j<c;j++){
  mv[cont]=m[i][j];
  cont ++;
}
}

//cout<<&&m<<endl;
matriz *Matriz=new matriz(2,3);
cout<<"Size=[ "<<Matriz->getsize()[0]<<"\t"<<Matriz->getsize()[1]<<" ]"<<endl;

Matriz->setM(mv);

double** P=Matriz->getM();


for(int i=0;i<2;i++){
for (int j=0;j<3;j++){
cout<<*(*(P+i)+j)<<"\t";


}
cout<<"\n";
}




return 0;
}
