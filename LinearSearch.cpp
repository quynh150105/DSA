#include<iostream>

using namespace std;

/* tim kiem tuan tu tren day chua sap xep
void timkiem(){
	int a[5] = {1,5,3,2,4};
	int k = 3;
	bool flag = false;
	for(int i = 0; i< 5; i++){
		cout<<a[i]<<endl;
		if(a[i] == k){
			cout<<a[i]<<" co o trong day tai vi tri "<<i<<endl;
			break;
		}
	}
	
}
*/

/* nhap vao 1 danh sach sinh vien va tim kiem theo ten

struct sinhvien{
	string id;
	string name;
	int age;
	double gpa;
	
	sinhvien(){		
	}
	
	void input(){
		cout<<"nhap ma sinh vien: ";
		cin>>id;
		cin.ignore();
		cout<<"nhap ten: ";
		getline(cin,name);		
		cout<<"nhap tuoi: ";
		cin>>age;		
		cout<<"nhap gpa: ";
		cin>>gpa;
	}
	
	void display(){
		cout<<"masinhvien: "<<id<<" "<<"ten: "<<name<<" "<<"tuoi: "<<age<<" "<<"gpa: "<<gpa<<endl;
	}
	
};

void nhap(sinhvien* sv, int n){
	for(int i = 0; i< n; i++){
		sv[i].input();
	}
}

void xuat(sinhvien* sv, int n){
	cout<<"Danh sach sinh vien: "<<endl;
	for(int i = 0; i< n; i++){
		sv[i].display();	
	}
}

void timkiem(sinhvien* sv, int n, string &name){
	bool check = false;
	for(int i = 0; i< n; i++){
		if(sv[i].name == name){
			sv[i].display();
			check = true;
		}
	}
	
	if(!check){
		cout<<"khong tim thay sinh vien!";
	}
}

	int n;
	do{
		cout<<"nhap so luong sinh vien > 0 va < 100: ";
		cin>>n;
	}
	while(n<=0 || n >=100);		
	sinhvien SV[n];	// mang danh sach sinhvien	
	
	nhap(SV,n);
	xuat(SV,n);
	bool check = false;
	string name;
	cout<<"nhap ten sinh vien can tim: ";
	cin.ignore();
	getline(cin,name);
	timkiem(SV,n,name);
*/

/* tim kiem tuan tu tren day da sap xep
	int a[5] = {1,4,8,12,3};
	int k = 8;
	for(int i = 0; i<5; i++){
		cout<<a[i]<<endl;
		if(a[i] == k){
			cout<<a[i]<<" co xuat hien trong day tai vi tri: "<<i<<endl;
			break;
		}
	}
*/


int main(){
		
	
	return 0;
}