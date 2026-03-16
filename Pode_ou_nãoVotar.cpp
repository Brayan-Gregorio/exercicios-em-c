#include<stdio.h>
main(){
	int idade;
	printf("Digite sua idade:");
	scanf("%d",&idade);
	
	if(idade>=18)
	printf("Pode votar");
	else{
		if(idade<18)
		printf("Nao pode votar");
	}
}
