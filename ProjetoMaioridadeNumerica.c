#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int n1;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	if(n1>=10){
		printf("O numero %d eh maior que 10.", n1);
	} else{
		printf("O numero %d eh menor que 10", n1);
		}
}
