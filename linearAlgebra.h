#ifndef LINEARALGEBRA_H_INCLUDED
#define LINEARALGEBRA_H_INCLUDED


#include "vetor.cpp"
#include "matriz.cpp"


class linearAlgebra
{
public:
	linearAlgebra();

	//Vetores
	vetor* add(vetor* A, vetor* B);           //soma de vetores
	vetor* crossproduct(vetor* A, vetor* B);  //produto vetorial
	double dotproduct(vetor* A, vetor* B);     //produto escalar
	vetor* produto(double A,vetor* B);         //multipicacao por escalar

    //Matrizes
	matriz* add(matriz* A,matriz* B);         //soma de matrizes
	matriz* produto(matriz* A,matriz* B);    //multiplicacao de matrizes
	matriz* produto(double A,matriz*B);     //Multiplicação por escalar

};


#endif // LINEARALGEBRA_H_INCLUDED
