#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(){

int coins[] = {25,10,5,1};

float troco = 0.0f;
int moedas = 0;
int cont = 0;
int temp = 0;
int resto = 0;
do{

troco = get_float("Troca devida:" );

int trocoXCem = round(troco * 100);

   while(cont < 4){
      moedas += trocoXCem / coins[cont];
      trocoXCem = trocoXCem % coins[cont];
      cont++;
   }

}while(troco < 0.0f);

printf("%i\n", moedas);

}