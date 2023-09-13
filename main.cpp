#include <iostream>
using namespace std;

int multiplicacao(int a, int b){
	if(b == 1){
		return a;
	}
	 return a + multiplicacao(a, b-1);
}

int termoFibonacci(int posicao){
	if(posicao <= 2){
		return 1;
	}
	return termoFibonacci(posicao - 1) + termoFibonacci(posicao - 2);
}

int somaVetor(int vetor[], int tamanhoVetor){
	if(tamanhoVetor == 1){
		return vetor[0];
	}
	return vetor[tamanhoVetor - 1] + somaVetor(vetor, tamanhoVetor - 1);
}

void inverterPos(int vetor[], int esquerdaVetor, int direitaVetor){
	if(direitaVetor > esquerdaVetor){
		int aux = vetor[direitaVetor - 1];
		vetor[direitaVetor - 1] = vetor[esquerdaVetor];
		vetor[esquerdaVetor] = aux;
		inverterPos(vetor, esquerdaVetor + 1, direitaVetor - 1);
	}
}


int main() {
	cout << multiplicacao(5, 3) << endl;
	cout << termoFibonacci(6) << endl;
	
	int vetor[5] = {2, 4, 5, 8, 11};
	cout << somaVetor(vetor, 5) << endl;
	
	inverterPos(vetor, 0, 5);
	
	for(int i = 0; i < 5; i++){
		cout << vetor[i] << ", ";
	}
	
	return 0;
}
