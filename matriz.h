#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

class matriz{

private:

int Size[2];
double **M;

public:

matriz(int m, int n);
void setM(double ** M1);
void setM(int i, int j, double r);
int* getsize();
double** getM();


};





#endif // MATRIZ_H_INCLUDED
