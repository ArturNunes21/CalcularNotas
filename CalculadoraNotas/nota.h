#ifndef NOTA_H_
#define NOTA_H_

#include <iostream>

class Nota{
private:
  float notaFinal;

public:

void setProducaoUm(float&);
void setProducaoDois(float&);
void calcularNotaFinal(float&, float&, const float&);
float getNotaFinal();
  
};

#endif