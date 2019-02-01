#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED



class matriz{

private:

int Size[2];
double **M;

public:

matriz(int m, int n);
matriz (const matriz &A);
void setM(double ** M1);
int* getsize();
double** getM();
void print();

//operadores 
void operator = (const matriz &A); 


};





#endif // MATRIZ_H_INCLUDED
