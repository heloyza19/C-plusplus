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

	vetor cross(vetor &);
	//operadores
	void operator =(const vetor &);
	vetor operator + (vetor &);
	vetor operator - (vetor &);
	double operator *(vetor &);
	vetor operator *(double);

private:
    int Size;
    double *V;
};


#endif // VETOR_H_INCLUDED
