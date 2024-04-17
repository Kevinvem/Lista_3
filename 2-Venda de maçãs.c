#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int m;
printf("Quantas maçãs você deseja comprar? ");
scanf("%i", &m);
if(m >= 12){
    printf("Irá custar %.2f", m*1.10);
}else{
    printf("Irá custar %.2f", m*1.30);
}
return(0);
}