#include<iostream>
using namespace std;

int main(){
double **M=new double*[4];

for (int i = 0; i < 4; ++i)
    M[i] = new double[i];


return 0;
}
