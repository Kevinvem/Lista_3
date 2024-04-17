#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int n;
printf("Informe a sua idade: ");
scanf("%i", &n);
if (n >= 18){
    printf("Você é maior de idade!");

}else{
    printf("Você é menor de idade!");
}
return(0);
}