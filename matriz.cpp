#include "matriz.h"
#include <stdlib.h>


matriz::matriz(int l, int c){
Size[0]=l;
Size[1]=c;
double** M=new double*[l];
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

void matriz::setM(int i, int j, double r){
*(*(M+i)+j)=r;
}

double** matriz::getM(){
return M;
}
