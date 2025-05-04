#include<bits/stdc++.h>

using namespace std;


void selectionSort(int a[], int n){
	for(int i = 0; i<n-1; i++){
		int m = i;
		for(int j = i+1; j< n; j++){
			if(a[m] < a[j])
				m = j;
		}
		int tg = a[i];
		a[i] = a[m];
		a[m] = tg;
	}
}

struct Student{
	string msv;
	string hoTen;
	int dob;
	float gpa;
	
	Student(){
		
	}
	
	Student(string msv, string hoTen, int dob, float gpa){
		this->msv = msv;
		this->hoTen = hoTen;
		this->dob = dob;
		this->gpa = gpa;
	}
	
	void input(){
		cout<<"nhap msv: ";
		cin.ignore();
		getline(cin,msv);
		cout<<"nhap hoTen: ";
		getline(cin,hoTen);
		cout<<"nhap namSinh: ";
		cin>>dob;
		cout<<"nhap diemTrungBinh: ";
		cin>>gpa;
	}
};

void nhapDanhSach(Student student[], int n){
	for(int i = 0; i< n; i++){
		student[i].input();
	}
}

void inDanhSach(Student student[], int n){
	for(int i = 0; i<n; i++){
		cout<<"msv: "<<student[i].msv;
		cout<<setw(15)<<"hoten: "<<student[i].hoTen;
		cout<<setw(15)<<"namSinh: "<<student[i].dob;
		cout<<setw(15)<<"gpa: "<<student[i].gpa<<endl;
	}
}

void sortByDob(Student student[], int n){
	for(int i = 0; i<n-1; i++){
		int m = i;
		for(int j = i+1; j< n; j++){
			if(student[m].dob < student[j].dob)
				m = j;
		}
		Student temp = student[i];
		student[i] = student[m];
		student[m] = temp;
	}
}

int main(){
	int n;
	do{
		cout<<"nhap 0<n<100: ";
		cin>>n;
	}
	while(n<=0 || n >100);
	Student student[n];
	nhapDanhSach(student,n);
	cout<<"-----------------------------"<<endl;
	cout<<"danh sach sinh vien: "<<endl;
	inDanhSach(student,n);
	sortByDob(student,n);
	cout<<"-----------------------------"<<endl;
	cout<<"danh sach sau khi sap xep: "<<endl;
	inDanhSach(student,n);
	
	
	return 0;
}