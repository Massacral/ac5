#include <stdio.h>

int main() {
    //Variaveis
   int idade = 20;
   float valorDoPgto = 12.42;
   double velParticula = 2.92817029837;
   char tipoHabMotor = 'A'; 
   
   //instrucoes
   printf("Informe a idade");
   scanf("%d", &idade); 
   printf("informe o valor do pagamento");
   scanf("%f", &valorDoPgto);
   printf("Informe a velocidade da particula");
   scanf("%lf", &velParticula);
   printf("Informe o tipo da habilitacao");
   scanf(" %c", &tipoHabMotor);

   //printf("Dados Informados: %d, %f, %lf, %c", idade, valorDoPgto, velParticula, tipoHabMotor);
   printf("==============================");
   printf("             Dados            ");
   printf("==============================");

   printf("\n");
   printf("Idade: %d", idade);
   printf("pagamento: %f", valorDoPgto);
   printf("particula: %lf", velParticula);
   printf("habilitacao: %c", tipoHabMotor);

   return 0;

}
