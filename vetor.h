#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED
#include <stdlib.h>


class vetor
{
public:

 	vetor(int t);
	~vetor();
	vetor (const vetor &A);
	void setV(double* A);
	double* getV();
	int getsize();
	double *V;


	void print();


	//operadores
	void operator =(const  vetor &A);
	vetor operator + (vetor A);

private:
    void setsize(int t);
    int Size;


};


#endif // VETOR_H_INCLUDED
