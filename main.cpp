#include <iostream>

using namespace std;

void llenar (int a[], int n = 10);
void imprimir (int a[], int n = 10);
void llenar_2(int b[], int n = 10);

int main() {
  int Arreglo[10];
  llenar(Arreglo);
  cout << "\nPrimer arreglo: " << endl;
  imprimir(Arreglo);
  llenar_2(Arreglo);
  cout << "\nSegundo arreglo: " << endl;
  imprimir(Arreglo);

  return 0;
}
void llenar (int a[], int n)
{
  int num;
  for(int i = 0; i < n; i++)
  {
    cout << "\nIngrese un número: ";
    cin >> num;
    while ((num < 50) || (num > 100))
    {
      cout << "\nIngrese un número correcto entre 50 y 100: ";
      cin >> num;
    }
    a[i] = num;

  }
}
void imprimir (int a[], int n)
{
  cout << endl;
  for(int i = 0; i < n; i++)
  {
    cout << "posición[" << i+1 << "] = " << a[i] << endl;
  }
}
void llenar_2(int a[], int n)
{
  for(int i = 0; i < n; i++)
  {
    a[i] = a[i] * 0.5;
  }
}
