/*
  Angel Odiel Treviño Villanueva
  A01336559
  Examen Parcial 1: problema 1 Fecha: 10/feb  Materia: Diseño de Algoritmos
*/

#include <iostream>

using namespace std;


int main(){

  int Inicio, Final, Suma = 0;
  cin >> Inicio;
  cin >> Final;
  if(Inicio%2 == 0){//empiezas con un par
    Inicio++;//se coloca en el siguiente inpar
  }

  for(;Inicio <= Final; Inicio+=2){//va de dos en dos hasta llegar al ultimo inpar
    Suma = Suma+Inicio;
  }

  cout << Suma << endl;

  return 0;
}
