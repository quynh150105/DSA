#include<iostream>

using namespace std;

void nhap(int a[], int n){
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
}

void xuat(int a[], int n){
	for(int i = 0; i< n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sap(int a[], int n){
	for(int i = 0; i<n; i++){
		for(int j = i+1; j< n; j++){
			if(a[i]<a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int gready(int a[], int n, int s){
	sap(a,n);
	int i = 0, p =0;
	while(i < n && p <= s){
		p+= a[i];
		i++;
	}
	if(p>s) return i;
	else return -1;
}

int main(){
	int n;
	cout<<"nhap n: ";cin>>n;
	int a[n];
	nhap(a,n);
	sap(a,n);
	xuat(a,n);
	return 0;
}