//109. Escreva um programa que leia dois n�meros inteiros M e N e um n�mero inteiro X e
//imprima todos os divisores exatos de X existentes no intervalo [M, N].
#include<stdio.h>
void main(){
	int k,m,n,x;
	printf("informe o primeiro numero do intervalo:");
	   		scanf("%d",&m);
	printf("informe o segundo numero do intervalo:");
			scanf("%d",&n);
	printf("informe o numero X:");
			scanf("%d",&x);		
	      for(k=m; k<=n; k++){
			if(k!=0 && x%k==0){
			 printf(" %d ",k);
			  } 	
		}	   		
	     
		 
	getch();	

}
