#include <iostream>
#include<math.h> 
using namespace std;
char calcularArmstrong(int nc, int na){
int n1,n2,n3,n4, suma;
  n1=na/1000;
  n2=(na%1000)/100;
  n3=((na%1000)%100)/10;
  n4=((na%1000)%100)%10;
  suma=pow(n1,nc)+pow(n2,nc)+pow(n3,nc)+pow(n4,nc);
return (suma==na)*'A'+(suma!=na)*'N';
}
int main() {
  int numeroCifras=4;
  int numeroA;
  cout<<"Ingresa un numero de 4 cifras: ";cin >> numeroA;
  cout<<"Resultado: "<<calcularArmstrong(numeroCifras, numeroA);
  
}