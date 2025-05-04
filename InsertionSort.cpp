#include<iostream>

using namespace std;

void insertionSort(int a[], int n){
	for(int i = 1; i< n; i++){
		int tam = a[i];
		int j = i-1;
		while(j>-1 && a[j] > tam){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tam;
	}
}


int main(){
	
	int a[5] = {20,33,52,17,4};
	cout<<"mang truoc khi sorted: "<<endl;
	for(int i =0; i<5; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	insertionSort(a,5);
	cout<<"mang sau khi sorted: "<<endl;
	for(int i = 0; i< 5; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}