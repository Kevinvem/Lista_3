#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int d1, d2;
printf("Informe o dividendo: ");
scanf("%i", &d1);
printf("Informe o divisor: ");
scanf("%i", &d2);
if (d2==0){
    printf("Divisao inválida!");
}
else{
    if(d1%d2==0){
        printf("É divisível!");
    }
    else{
        printf("Não é divisível!");
    }
}
return(0);
}