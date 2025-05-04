#include<iostream>

using namespace std;

void insertionSort(int a[], int n){
	for(int i = 1; i< n; i++){
		// lay ra phan tu chi so i;
		int x = a[i]; // phan tu can xet
		int pos = i-1; //bien vi tri, 
		while(pos >= 0 && x < a[pos]){
			a[pos+1] = a[pos]; //dich cac phan tu o vi tri pos sang phai
			pos--; // xet tiep cac phan tu phia truoc
		}
		a[pos+1] = x; // chen vao vi tri do
	}
}


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	insertionSort(a,10);
	for(int i = 0; i<10; i++){
		cout<<a[i]<<" ";
	} 
	cout<<endl;
	return 0;
} 