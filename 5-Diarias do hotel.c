#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");
int d;
printf("Quantos dias vai passar no hotel? ");
scanf("%i", &d);
if(d < 7){
    printf("Vai custar: %i", (d*200)+(d*4));
}
else{
    if(d = 7){
printf("Vai custar: %f", (d*200)+(d*3.60));
}
else{
    printf("Vai custar: %i", (d*200)+(d*3));
}
}
return(0);
}