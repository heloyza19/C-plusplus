#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED
#include <stdlib.h>


class vetor
{
public:
 	vetor(int t);
	~vetor();
	void setV(double A[]);
	double* getV();
    int Size;
private:
    double *V;
};


#endif // VETOR_H_INCLUDED
