#include <iostream>
using namespace std;

void CargarMat();
int SumaFilaPar(int mat[][3]);
int mat[5][3],f,c; 
int main(){
 CargarMat();
 cout << "La sumatoria de las filas pares es: " << SumaFilaPar(mat);
 return 0;
}
void CargarMat(){
 cout<<"Ingrese 12 enteros: ";
 for(f = 0; f < 5; f++){
  for(c = 0; c < 3; c++){ cin >> mat[f][c]; }
 }
}

int SumaFilaPar(int mat[][3]){
 int suma = 0;
 for(f = 0;f < 52;f += 2){
  for(c = 0; c <3 ; c++){ suma += mat[f][c]; }
 }
 return suma;
}
