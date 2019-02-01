#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED
#include <stdlib.h>


class vetor
{
public:

 	vetor(int t);
	vetor ( const vetor &A);
	~vetor();


	void setV(double* A);
	double* getV();
	int getsize();
	void print();


	//operadores
	void operator =(const vetor &);
	vetor operator + (vetor &A);
	vetor operator - (vetor &A);

private:
    int Size;
    double *V;
};


#endif // VETOR_H_INCLUDED
