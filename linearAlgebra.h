#ifndef LINEARALGEBRA_H_INCLUDED
#define LINEARALGEBRA_H_INCLUDED


#include "vetor.cpp"
#include "matriz.cpp"

class linearAlgebra
{
public:
	linearAlgebra();

	//Vetores
	vetor* add(vetor* A, vetor* B);
	vetor* crossproduct(vetor* A, vetor* B);
	double dotproduct(vetor* A, vetor* B);

    //Matrizes
	matriz* add(matriz* A,matriz* B);
	matriz* produto(matriz* A,matriz* B);

};


#endif // LINEARALGEBRA_H_INCLUDED
