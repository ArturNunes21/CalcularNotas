#include "nota.h"
#include <iostream>
#include <iomanip>

  void Nota::setProducaoUm(float& n1){
  n1 = n1 * 2;
  };

void Nota::setProducaoDois(float& n1){
  n1 = n1*2;
};

void Nota::calcularNotaFinal(float& n1, float& n2, const float& n3){

  this->notaFinal = (n1 + n2 + n3) / 5;
};

float Nota::getNotaFinal(){

  std::cout << std::fixed << std::setprecision(2);
  return notaFinal;
};
