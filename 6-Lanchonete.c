#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int op,q;
printf("------------CARDAPIO------------\n");
printf("--Código---Especificação---Preço\n");
printf("---100----Cachorro quente---7.00\n");
printf("---101--------Bauru---------8.00\n");
printf("---102------X-Salada--------9.00\n");
printf("---103-----Hamburguer-------10.00\n");
printf("---104-----Refrigerante-----3.00\n");
printf("Escolha seu pedido pelo código: ");
scanf("%i", &op);
printf("Quantos vai querer?");
scanf("%i", &q);
switch (op){
case 100:
printf("Você escolheu cachorro quente!\n");
printf("Vai custar: %i", 7*q);
break;
case 101:
printf("Você escolheu bauru!\n");
printf("Vai custar: %i", 8*q);
break;
case 102:
printf("Você escolheu X-Salada!\n");
printf("Vai custar: %i", 9*q);
break;
case 103:
printf("Você escolheu Hamburguer!\n");
printf("Vai custar: %i", 10*q);
break;
case 104:
printf("Você escolheu Refrigerante!\n");
printf("Vai custar: %i", 3*q);
break;
default:
printf("Opção invalida!");
break;

}
return(0);
}