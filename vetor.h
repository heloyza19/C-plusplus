#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED

#include <stdlib.h>


class vetor
{
public:

 	vetor(int t);
 	vetor();
	~vetor();
	void setV(double* A);
	double* getV();
	int getsize();

	//operadores
	vetor* operator + (vetor* A);

private:
    void setsize(int t);
    int Size;
    double *V;

};


#endif // VETOR_H_INCLUDED
