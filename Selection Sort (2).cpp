#include <iostream> 

using namespace std; 

void SelectionSort(int arr[], int n){
	int comparaciones = 0; 
	int intercambios = 0;
	for (int i=0; i<n-1; i++){
		int menor = i; 
		for (int j = i+1; j<n; j++){
			comparaciones++;
			if (arr[j]<arr[menor]){
				menor = j;
			}
		}
	if (menor != i){
		int temp = arr[i];
		arr[i] = arr[menor];
		arr[menor] = temp;
		intercambios++;
	}
	}
	cout << "comparaciones: " << comparaciones << " " << "intercambios: " << intercambios<< endl; 
}

int main(){
	int n = 5;
	int numeros[5] = {5,4,3,2,1};
	SelectionSort(numeros, n);
	for (int i=0; i<n; i++){
		cout << numeros[i];
	}
	return 0; 
}

