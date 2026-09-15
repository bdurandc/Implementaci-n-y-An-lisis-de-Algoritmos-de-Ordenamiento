#include <iostream> 

using namespace std; 

void BubbleSort(int arr[], int n){
	int comparaciones = 0; 
	int intercambios = 0; 
	for (int i=0; i<n; i++){
		bool swapped = false; 
		for (int j=0; j<n-1; j++){
			comparaciones++;
			if(arr[j]>arr[j+1]){
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			swapped = true; 
			intercambios++;	
			}
		}
		if (swapped == false){
			break;
		}
	}
	cout << "comparaciones: " << comparaciones << " " << "intercambios: " << intercambios<< endl; 
}

int main(){
	int n = 4;
	int numeros[4] = {1,2,3,4};
	BubbleSort(numeros, n);
	for (int i=0; i<n; i++){
		cout << numeros[i];
	}
	return 0; 
}

