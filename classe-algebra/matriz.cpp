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
std::cout<<std::endl;
}



