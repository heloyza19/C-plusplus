#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED



class matriz{

private:

int Size[2];
double **M;

public:

matriz(int m, int n);
matriz (const matriz &);


void setM(double ** M1);
int* getsize();
double** getM();
void print();

//operadores 
void operator = (const matriz &A); 
matriz operator + (matriz &A);
matriz operator - (matriz &A);
matriz operator * (matriz &B);
matriz operator * (double n);


};





#endif // MATRIZ_H_INCLUDED
