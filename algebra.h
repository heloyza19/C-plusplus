#ifndef ALGEBRA_H_INCLUDED
#define ALGEBRA_H_INCLUDED


class algebra{
private:

static const int tam=2;

public:
//algebra(int n);
void setsoma(double V[tam],double U[tam]);
double soma[tam];

void setMescalar(double V[tam],double n);
double Mescalar[2];

void setprodutointerno(double V[tam], double U[tam]);
double produtointerno;

//produto vetorial não é definido no R2!!!!
void setprodutovetorial(double V[tam],double U[tam]);
double produtovetorial[3];

};

/*
algebra::algebra(int n){
tam=n;
}
*/

//Operacao de soma
void algebra::setsoma(double V[tam],double U[tam]){
  for (int i=0;i<tam;i++){
      soma[i]=(V[i]+U[i]);
  }
}

void algebra::setMescalar(double V[tam],double n){
for(int i=0;i<tam;i++){
    Mescalar[i]=(n*V[i]);
}
}

void algebra::setprodutointerno(double V[tam], double U[tam]){
produtointerno=0;
for(int i=0;i<tam;i++){
    produtointerno+=(V[i]+U[i]);
}
}

void algebra::setprodutovetorial(double V[tam],double U[tam])
{
if(tam==3){
produtovetorial[0]=V[1]*U[2]-V[2]*U[1];
produtovetorial[1]=V[2]*U[0]-V[0]*U[2];
produtovetorial[2]=(V[0]*U[1]-V[1]*U[0]);
}else{
std::cout<<"produto vetorial so esta definido no R3"<<std::endl;
}


}


#endif // ALGEBRA_H_INCLUDED
