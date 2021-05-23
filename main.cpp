#include <iostream>
#include <stdlib.h>

using namespace std;

// Declaração da função:

void Parametros (int Cadeia_num, int pont)

int main()
{
  int x;
  int y;

  int *ptr;
  x = 5;
  y =10;
  ptr = &x;
  cout << "O valor da variável X é: " << ptr << endl;
  *ptr = 10;
  cout << "Agora, X vale: " << *ptr << endl;

  return 0;
}

