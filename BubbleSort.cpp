#include<bits/stdc++.h>

using namespace std;

void bubleSort(int a[] ,int n){
	for(int i = 0; i<n-1; i++){
		for(int j = n-1; j>0; j--){
			if(a[j] > a[j-1]){
				int temp= a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
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
	
//	void display(){
//		cout<<"-------------------------------"<<endl;
//		cout<<"msv: "<<msv<<endl;
//		cout<<"hoTen: "<<hoTen<<endl;
//		cout<<"namSinh: "<<dob<<endl;
//		cout<<"diemTrungBinh: "<<gpa<<endl;
//	}
//	
};

void nhapDanhSach(Student student[], int n){
	for(int i = 0; i< n; i++){
		student[i].input();
	}
}

void inDanhSach(Student student[], int n){
	
	for(int i = 0; i< n; i++){
		cout<<"msv: "<<student[i].msv;
		cout<<setw(10)<<"hoTen: "<<student[i].hoTen;
		cout<<setw(10)<<"namSinh: "<<student[i].dob;
		cout<<setw(10)<<"diemTrungBinh: "<<student[i].gpa<<endl;
	}
}

bool check(Student a, Student b){
	return a.hoTen > b.hoTen;
}

void sortByName(Student student[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j=n-1; j>0; j--){
			if(check(student[j], student[j-1])){
				Student temp = student[j];
				student[j] = student[j-1];
				student[j-1] = temp;
			}
		}
	}
}

void sortByGpa(Student student[], int n){
	for(int i = 0; i< n-1; i++){
		for(int j = n-1; j>0; j--){
			if(student[j].gpa > student[j-1].gpa){
				Student temp = student[j];
				student[j] = student[j-1];
				student[j-1] = temp;
			}
		}
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
	sortByName(student,n);
	cout<<"-----------------------------"<<endl;
	cout<<"danh sach sau khi sap xep: "<<endl;
	inDanhSach(student,n);
	cout<<"------------------------------"<<endl;
	cout<<"danh sach sau khi sap xep theo diem trung binhf laf: "<<endl;
	sortByGpa(student,n);
	inDanhSach(student,n);
	return 0;
}