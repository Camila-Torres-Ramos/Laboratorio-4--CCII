#include <iostream>
using namespace std;

const int dim = 8;

bool BuscaVal(int v[], int);
int main(){
 int vector[dim],x,valor;
 
cout<<"Ingresar 8 N enteros: ";
 for(int i = 0; i < dim; i++){
  cin >> vector[i];
 }
cout << "Ingrese un N a buscar en el vector: ";
 cin >> x;
 valor = BuscaVal(vector,x);
 if(valor){ cout << "Valor encontrado!!!"; }
 else{ cout<<"No se encontro valor!!!"; }
 return 0;
}

bool BuscaVal(int v[],int val){
 for(int i = 0; i < dim; i++){
 if(val == v[i]){ return true; }
 }
 return false;
}
