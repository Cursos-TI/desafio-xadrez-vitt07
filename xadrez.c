#include <stdio.h>
// Desafio de Xadrez - MateCheck

int main() {
    
    //variáveis "Peças de Xadrez".
    int bispo = 1;
    int torre = 1;
    int rainha = 1;

    //Movimentação do Bispo em "While".
      printf("**Movendo o Bispo para 5 casas pra diagonal superior direita!**\n");
while (bispo <= 5)
{
      printf("diagonal superior direita %d\n", bispo);

bispo++;
} 
printf("Movendo Feito!\n\n\n"); 
    
      //Movimentação da Torre em "DoWhile".
      printf("**Movendo a Torre para 5 casas pra direita!**\n");
do{
       printf("Direita %d\n", torre);
torre++;
}
while (torre <= 5);
    
printf("Movendo Feito!\n\n\n");
    
    //Movimentação da Rainha em "For".
      printf("**Movendo a Rainha para 8 casas pra esquerda!**\n");
for(rainha = 1; rainha <= 8; rainha++){
      printf("Esquerda %d\n", rainha);
}

printf("Movendo Feito!\n\n\n");

    return 0;
}
