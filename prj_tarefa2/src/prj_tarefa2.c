/*
 ============================================================================
 Name        : prj_tarefa2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//#define  PI 3.14

//funcao para mostrar os numeros pares multiplos de 3 ate 1000
void mostrarnumerosparesmultiplosdetres() {
	int cont=0;

	printf("numeros pares multiplos de 3 ate 1000:\n");
	for (int i=2; i <=1000; i += 2){
		if(i % 3 ==0){
			printf("%d ", i);
			cont++;
		}
	}
	printf("\nTotal de numeros pares multiplos de 3: %d\n\n", cont);
}
 //funcao para ler 10 numeros inteiros, calcular a soma e a media
void calcularsomaemedia() {
	int numero;
	int soma = 0;

	printf("digite 10 numeros inteiros:\n");
	fflush(stdout);
	for (int i = 0; i<10; i++) {
		scanf("%d", &numero);
		soma += numero;
	}
	double media = soma /10;
	printf("soma: %d\n", soma);
	printf("media %.2lf\n\n", media);
}
//funcao para calcular perimetro e area circulo
void calcularperimetroeareadocirculo() {
	double raio, perimetro, area;
	const double PI=3.14;

	printf("digite o valor do raio do circulo:\n");
	fflush(stdout);
	scanf("%lf", &raio);

	perimetro = 2*PI*raio;
	area = PI*raio*raio;

	printf("perimetro do circulo %lf", perimetro);
	printf("\narea do circulo:%.2lf", area);
}
// funcao para calcular a area de 4 comodos de uma casa
void calcularareadoscomandos() {
	double largura, comprimento, area;


	for (int i = 1; i <= 4; i++) {
		printf("digite a largura do comodo %d: ", i);
		fflush(stdout);
		scanf("%lf", &largura);

		printf("digite o comprimento do comodo %d", i);
		scanf("%lf", &comprimento);

		area = largura * comprimento;

		printf("area do comodo %d: %.2lf metros quadrados \n", i, area);

	}
}

int main (void) {
	//mostrarnumerosparesmultiplosdetres();
	//calcularsomaemedia();
	//calcularperimetroeareadocirculo();
	calcularareadoscomandos();
}

