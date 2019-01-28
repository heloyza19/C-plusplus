#include "matriz.h"
#include <stdlib.h>


matriz::matriz(int m, int n){
setsize(m, n);
M=(double **) calloc (m, sizeof(double *));
for ( int i=0; i<m; i++ )
{
M[i] = (double*) calloc (n, sizeof(double));
}
}

void matriz::setsize(int m, int n){
Size[0]=m;
Size[1]=n;
}

int* matriz::getsize(){
return Size;
}


void matriz::setM(double S[])
{
int cont=0;
for(int i=0; i<Size[0];i++){
for (int j=0;j<Size[1];j++){
*(*(M+i)+j)=S[cont];
cont++;

}}}

void matriz::setM(int i, int j, double r){
*(*(M+i)+j)=r;
}

double** matriz::getM(){
return M;
}
