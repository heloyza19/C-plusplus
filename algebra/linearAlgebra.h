#ifndef LINEARALGEBRA_H_INCLUDED
#define LINEARALGEBRA_H_INCLUDED


#include "vetor.cpp"
//#include "matriz.h"


class linearAlgebra
{
public:
	
	//Vetores

	vetor add(vetor A, vetor B);           //soma de vetores
	vetor crossproduct(vetor A, vetor B);  //produto vetorial

	//double dotproduct(vetor A, vetor B);
	//vetor produto(double A,vetor B);
	/*
	double dotproduct(vetor* A, vetor* B);     //produto escalar
	vetor produto(double A,vetor* B);         //multipicacao por escalar


	//matrizes

	matriz add(matriz* A,matriz* B);
	matriz produto(matriz* A,matriz* B);
	matriz produto(double A,matriz*B);
*/
};


#endif // LINEARALGEBRA_H_INCLUDED
