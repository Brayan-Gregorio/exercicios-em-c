#include<stdio.h>
main(){
float nota1, nota2, media;
printf("Digite a nota1:");
scanf("%f",&nota1);
printf("Digite a nota2:");
scanf("%f",&nota2);
media=(nota1+nota2)/2;
if(media>=6)
printf("aprovado,com media %f",media);
else
printf("reprovado,com media %f",media);	
}
