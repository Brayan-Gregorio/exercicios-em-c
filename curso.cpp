#include<stdio.h>
main(){
	float valor, total, juros, desconto;
	int codigo;
	printf("Qual o valor do curso:");
	scanf("%f",&valor);
	
	printf("Escolha a forma de pagamento:\n");
	printf("1-A vista dinheiro ou cheque (10%% de desonto)\n ");
	printf("2-A vista cartao de credito (5%% de desconto)\n");
	printf("3-Em 2 vezes (sem juros)\n");
	printf("4-Em 3 vezes (10%% de juros)\n");
	scanf("%d",&codigo);
	
	if(codigo==1){
		desconto=valor*0.10;
		total=valor-desconto;
		printf("Valor da venda:% .2f\n",valor);
		printf("Desconto:% .2f\n",desconto);
		printf("total a pagar:% .2f\n",total);
		
	}else{
		if(codigo==2){
			desconto=valor*0.05;
			total=valor-desconto;
		printf("Valor da venda:% .2f\n",valor);
		printf("Desconto:% .2f\n",desconto);
		printf("total a pagar:% .2f\n",total);
		
		}else{
			if(codigo==3){
				total=valor;
		printf("Valor da venda:% .2f\n",valor);
		printf("Sem juros:% .2f\n");
		printf("total a pagar:% .2f\n",total);
		
			}else{
				if(codigo==4){
					juros=valor*0.10;
					total=valor+juros;
		printf("Valor da venda:% .2f\n",valor);
		printf("juros:% .2f\n",juros);
		printf("totala pagar:% .2f\n",total);
				}else{
					printf("Codigo invalido\n");
				}
			}
		}
	}
}
