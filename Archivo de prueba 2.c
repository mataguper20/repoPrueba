#include <stdio.h>
int suma(int a, int b){
	int suma = 0, i;
	for(i = a ; i<=b ; i++)
		suma += i;
	return suma;
}

int sumaGauss(int a, int b){
	
	return (b*b-a*a+a+b)/2;
}

int main(){
	long X, i, cant=0;
	X=8;
	while(cant != 7){
		for(i = 2; i < X; i++){
			if(sumaGauss(1,i-1)== sumaGauss(i+1, X)){
				printf("\nX: %ld -> %ld",X,i);
				cant++;
				break;
			}
		}
		X++;
	}	
	return 0;	 
}
