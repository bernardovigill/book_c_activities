/* Escreva um programa que solicite ao usuário a idade, o montante a depositar e o nº de conta em que se quer realizar o depósito, declarando as variáveis como short, int e long. */

#include <stdio.h>

int main ()

{
    short int idade;
    int montante;
    long int n_conta;
    
printf("Qual a idade: "); scanf("%hd", &idade);
printf("Qual o montante: "); scanf("%d", &montante);
printf("Qual o número da conta: "); scanf("%ld", &n_conta);
printf("Uma pessoa com %hd anos depositou R$%d na conta de nº%ld\n", idade, montante, n_conta);

return 0;
    
}
