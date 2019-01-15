#ifndef LINEARALGEBRA_H_INCLUDED
#define LINEARALGEBRA_H_INCLUDED


#include "vetor.cpp"

class linearAlgebra
{
public:
	linearAlgebra();
	vetor* add(vetor* A, vetor* B);
	vetor* crossproduct(vetor* A, vetor* B);
	double dotproduct(vetor* A, vetor* B);
};


#endif // LINEARALGEBRA_H_INCLUDED
