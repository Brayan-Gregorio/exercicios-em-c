#include <stdio.h>
main(){
    float altura, pesoideal;
    int sexo;
    printf("Digite sua altura (ex: 1.75): ");
    scanf("%f", &altura);
    printf("Digite seu sexo (1 para homem / 0 para mulher): ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        pesoideal = (72.7 * altura) - 58;
    } else {
        pesoideal = (62.1 * altura) - 44.7;
    }
    printf("Seu peso ideal e: %.2f kg", pesoideal);
}

