#include<stdio.h>
main(){
	float nl, na, ne, media;
	printf("Digite a nota do laboratorio:");
	scanf("%f",&nl);
	printf("Digite a nota da avaliacao final:");
	scanf("%f",&na);
	printf("Digite a nota do exame final:");
	scanf("%f",&ne);
	media=(nl*2+na*3+ne*5)/10;
	printf("media ponderada :%.2f\n",media);
	if(media>=8 && media <=10){
		printf("Sua nota e:A");
	}else{
		if(media>=7){
			printf("Sua nota e:B");
		}else{
			if(media>=6){
				printf("Sua nota e:C");
			}else{
				if(media>=5){
					printf("Sua nota e:D");
				}else{
					printf("Sua nota e:E");
				}
			}
		}
	}
}
