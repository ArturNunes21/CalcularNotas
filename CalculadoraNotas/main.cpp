#include <iostream>
#include "nota.h"

int main() {

  Nota p1;
  char resposta;
  float notaProducaoUm, notaProducaoDois, notaMemorizacao;
 
    std::cout << "Insira a primeira Production Grade do aluno = ";
    std::cin >> notaProducaoUm;
    p1.setProducaoUm(notaProducaoUm);

  std::cout<< "Insira a segunda Production Grade = ";
  std::cin >> notaProducaoDois;
  p1.setProducaoDois(notaProducaoDois);

  std::cout << "Insira a nota de Memorization = ";
  std::cin >> notaMemorizacao;

  p1.calcularNotaFinal(notaProducaoUm, notaProducaoDois, notaMemorizacao);

  std::cout << "============MEDIA FINAL============" << std::endl;
  std::cout << "               " << p1.getNotaFinal() << std::endl;
}