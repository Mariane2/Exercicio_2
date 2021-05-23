//ATIVIDADE 2 - Problema da identificação de máximos e mínimos
// Autor(a): Mariane Lima Dutra

#include <iostream>
#include <stdlib.h>

using namespace std;

// Declaração da função:

void MinMax (int *Cadeia_num, int *Max_num, int *Min_num, int num_elem);

int main()
{
  int num_Max = 0, num_Min = 0, elem_num = 0;

// Usuário entra com os dados da quantidade de valores para o vetor.

cout << "Entre com a quantidade de valores: \n" ;
cin >> elem_num;

// Com a quantidade de valores informada, podemos declarar o vetor de caracteres para o tamanho solicitado.

int num_Cadeia [elem_num];

// Preenchimento do vetor:

for (int i = 0; i < elem_num; i++){
 
 cout << "Entre com o "; 
 cout << i + 1;
 cout << "º valor: \n";
 cin >> num_Cadeia[i];

}

// Alocando na variável Max e Min o primeiro elemento do vetor.

num_Max = num_Cadeia[0];
num_Min = num_Cadeia[0];

// Função pega o vetor de caracteres, endereço de memória do inicio do vetor (num_Min e num_Max) e numero de elementos.

MinMax (num_Cadeia, &num_Max, &num_Min, elem_num);


// Impressão das informações solicitadas, passo 2.

cout << " Quantidade de elementos do vetor: " << elem_num;

cout << " \n Valores do vetor: \n";

for (int i =0; i < elem_num; i++){

cout<< num_Cadeia[i];
cout << endl;

}

cout << " Valor Máximo:" << num_Max << endl;
cout << " Valor Mínimo:" << num_Min;

  return 0;
}



// Função calcula valor máximo e minimo.

void MinMax (int *Cadeia_num, int *Max_num, int *Min_num, int num_elem){

for(int j =0; j < num_elem; j++){
   if (Cadeia_num[j] > *Max_num ){
      *Max_num = Cadeia_num[j];
   } else {
       if(Cadeia_num[j] <*Min_num){
         *Min_num = Cadeia_num[j];
       }

   }

}


}