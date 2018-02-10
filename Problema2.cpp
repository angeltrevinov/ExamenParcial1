/*
  Angel Odiel Treviño Villanueva
  A01336559
  Examen Parcial 1: problema 2 Fecha: 10/feb  Materia: Diseño de Algoritmos
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  string original, sub, salida = "SI";
  cin >> original;
  cin >> sub;
  bool sentido = true;
  vector <int> Posiciones;
  int i = 0;//para correr en el string
  while(i < sub.size()){//ordenamiento normal
    Posiciones.push_back(original.find(sub[i]));
    if(i > 0 && (Posiciones[i] < Posiciones[i-1] || Posiciones[i] == -1) ){
        sentido = false;
        salida = "NO";
        break;
    }//falta reversa
    i++;
  }
  if(!sentido){//checar en reversa
    salida = "YES";
    Posiciones.clear();
    i = sub.size()-1;
    while(i >= 0){
      Posiciones.push_back(original.find(sub[i]));
      if(i > 0 && (Posiciones[i] > Posiciones[i-1] || Posiciones[i] == -1)){
          salida = "NO";
          break;
      }//falta reversa
      i--;
    }
  }
  cout << salida << endl;
  return 0;
}
