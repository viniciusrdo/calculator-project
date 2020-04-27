#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

//Feito por: Vinícius Marcelo Rosa de Oliveira


float regrade3( float n1 , float n2 , float n3){
	
	float x ;
	
	if(n1==0 || n2==0 || n3==0){
	
		printf("Nenhum dos números pode ser 0 para realizar a regra de 3");
	
	}
	else{
	
	
	printf("%.2f------%.2f\n",n1 ,n2);
	
	printf("%.2f------x\n", n3 );
    
	x=(n2*n3)/n1	;
    
	
	printf("%.2f" , x);
	
	
	
	}
	
	 
}
int mmc(int numero1, int numero2) {



    int sobra, x, y,mmc;

    x = numero1;

    y = numero2;

    do {

        sobra = x % y;

        x = y;

        y = sobra;

    } while (sobra != 0);

    mmc = ( numero1 * numero2) / x;


    printf("O mmc é %d" ,mmc);
}
int mdc(int numero1, int numero2) {

    int sobra;

    do {
        sobra = numero1 % numero2;

        numero1 = numero2;

        numero2 = sobra;

    } while (sobra != 0);

    return printf("o Mdc é %d " , numero1);
}

float areaQuadrado (float a){

	float areaQ = a*a;

	return areaQ;
}
float areaTriangulo (float b, float h){

	float areaT = (b*h/2);

	return areaT;
}
float areaTrapezio (float bmaior, float bmenor, float h){

	float areaTr = (((bmaior+bmenor)*h)/2);

	return areaTr;
}
float areaCirculo(float r){

	float areaC = (3.14*(r*r));

	return areaC;
}
float bhaskara(float a, float b, float c){ // Esta função calcula e devolve o resultado de uma função do 2° grau utilizando o método de Bhaskara
	
	float resultado, x1, x2, delta;
	
	setlocale(LC_ALL, "Portuguese");
	
	if(a==0){

		printf("A equação referida não é do segundo grau!");

	}
	else {
	
	delta = b*b - 4*a*c;
	
	if(delta<0){

		printf("A equação referida não pode ser resolvida em Reais!!");

	}
 	else{

 		x1 = (-b + sqrt(delta)) / (2*a);
 	
		x2 = (-b - sqrt(delta)) / (2*a);
	
		printf("\n O valor de x1 é: %.2f", x1);

		printf("\n O valor de x2 é: %.2f", x2);

	 }
	 
	} 
	
}








int main(void){ // Esta é a função principal do programa
	
	setlocale(LC_ALL, "Portuguese");
	
	int menu=26;
	
	printf("-------------------------------------------------------------------------------------------------------------------");
	printf("\n-------------------------------------Bem-vindo ao menu de calculadoras---------------------------------------------\n");
	printf("-------------------------------------------------------------------------------------------------------------------\n\n\n");
	while(menu!=1){
	
	printf("\n\n\n\n\n\n");

	printf("\n 	1 para Sair.");

	printf("\n	2 para Bhaskara.");

	printf("\n 	3 para Calcular áreas de figuras.");

	printf("\n	4 para regra de 3.");

	printf("\n	5 para MMC.");

	printf("\n	6 para MDC.\n\n");

	printf("	Digite o número correspondente a função desejada: ");


	
	scanf("%d", &menu);


	
	if(menu==2){
	
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBem-vindo a Calculadora de Bhaskara!\n");
		
		float a=0.0, b=0.0, c=0.0;
		
		printf("Insira o valor de A: ");
	
		scanf("%f", &a);
		
		printf("\nInsira o valor de B: ");
	
		scanf("%f", &b);
		
		printf("\nInsira o valor de C: ");
	
		scanf("%f", &c);
		
		printf("\n\n\n\n\n\n");
		
		bhaskara(a,b,c);
			
	}
	
	else if(menu==3){
		
	int escolha=5;
	
	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBem-vindo a calculadora de áreas!!\n");
	
	printf ("\n\n\n\n\n\nEscolha a figura cuja área você deseja calcular: \n");
	
	
	while(escolha!=0){
	
	printf ("Digite 0 para sair\n");
	
	printf ("Digite 1 para quadrado\n");

	
	printf ("Digite 2 para triângulo\n");
	
	printf ("Digite 3 para trapézio\n");
	
	printf ("Digite 4 para círculo\n");
	
	
	printf ("\n\n\nSua escolha: ");
	
	scanf ("%d",&escolha);
	
	if (escolha==1){
	
	
	float n=0.0;
	
	printf ("\n\n\nDigite a medida da altura do quadrado: ");
	
	scanf ("%f",&n);
	
	float areaQuadrado(float n);
	
	float areaQ = areaQuadrado(n);
	
	printf ("\n\nA área do quadrado é: %.2f U.M.\n\n\n\n",areaQ);
	
	
}else if (escolha==2) {
	
	float b,h;
	
	printf ("\n\nDigite a medida da base e da altura do triângulo: ");
	
	scanf ("%f %f",&b,&h);
	
	float areaTriangulo(float b, float h);
	
	float areaT = areaTriangulo(b,h);
	
	printf ("\n\nA área do triângulo é: %.2f U.M.\n\n\n\n",areaT);
	
	
}else if (escolha==3){
	
	float bmaior, bmenor, h;
	
	printf ("\n\nDigite a medida da base maior, base menor a altura do trapézio: ");
	
	scanf ("%f%f%f",&bmaior,&bmenor,&h);
	
	float areaTrapezio (float bmaior, float bmenor, float h);
	
	float areaTr = areaTrapezio(bmaior,bmenor,h);
	
	printf ("\n\nA área do trapézio é: %.2f U.M.\n\n\n\n",areaTr);
	
}else if (escolha==4){
	
	float r;
	
	printf ("\n\nDigite a medida do raio do círculo: ");
	
	scanf ("%f",&r);
	
	float areaCirculo(float r);
	
	float areaC = areaCirculo(r);
	
	printf ("\n\nA área do círculo é: %.2f U.M.\n\n\n\n",areaC);
				}
			}
		
		}
		else if(menu==4){
	
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBem-vindo a Calculadora de Regra de 3!!\n\n\n");
		
		float n1=0.0, n2=0.0, n3=0.0, x=0.0;
	
		printf("n1------n2\n",n1 ,n2);
	
	    printf("n3------x\n", n3 );
		
		printf("\nInsira o valor de n1: ");
	
		scanf("%f", &n1);
	
		printf("\nInsira o valor de n2: ");
	
		scanf("%f", &n2);
	
		printf("\nInsira o valor de n3: ");
	
		scanf("%f", &n3);
	
		printf("\n\n\n\n\n\n");
	
		regrade3(n1 , n2 , n3);
		
		}	else if(menu==5){
	
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBem-vindo a Calculadora de MMC!\n");
		
		int numero1=0, numero2=0;
		
		printf("\nInsira o valor de num1: ");
		scanf("%d", &numero1);
	
		printf("\nInsira o valor de num2: ");
		scanf("%d", &numero2);
	
		mmc(numero1,numero2);
		
		}
		else if(menu==6){

	
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBem-vindo a Calculadora de MDC!\n");


		
		int numero1=0, numero2=0;

		
		printf("\nInsira o valor de numero1: ");

		scanf("%d", &numero1);
	
		printf("\nInsira o valor de numero2: ");

		scanf("%d", &numero2);


	
		mdc(numero1,numero2);
	
			}
			
	}
	
	
	
		
	
	return 0;
}

