#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int n;
printf("Informe um valor inteiro: ");
scanf("%i", &n);
if (n==0){
    printf("O valor é neutro!");
}
else{
    if(n>0){
        printf("O valor é positivo!");
    }
    else{
        printf("O valor é negativo!");
    }
}
return(0);
}