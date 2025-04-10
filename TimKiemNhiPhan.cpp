#include<iostream>
#include<vector>

using namespace std;

/* tim kiem voi 1 day da sap xep se tot hon
	int n,key;
	cout<<"nhap so luong phan tu cua mang: ";
	cin>>n;
	int a[n];
	nhap(a,n);
	xuat(a,n);
	sort(a,n);
	xuat(a,n);
	cout<<"nhap phan tu can tim: ";
	cin>>key;
	if(binary_search(a,0,n-1,key) == -1){
		cout<<"phan tu "<<key<<" khong ton tai trong day"<<endl;
	}
	else{
		cout<<"phan tu "<<key<<" o vi tri: "<<binary_search(a,0,n-1,key);
	}
	
	//
	void nhap(int *a, int n){
	for(int i = 0; i< n; i++){
		cin>>a[i];
		}
	}
	
	//
	void xuat(int *a, int n){
	for(int i = 0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	}
	
	//
	void sort(int *a, int n){
	for(int i = 0; i< n; i++){
		for(int j = i+1; j< n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
	//
	int binary_search(int a[],int l, int r, int key){
	if(r<l)	// truong hop mang rong
		return -1; 
	else{
		int m = (l+r)/2;
		if(a[m]==key){
			return m;
		}
		else if(a[m] > key)
			return binary_search(a,l,m-1,key);
		else
			return binary_search(a,m+1,r,key);
	}
	
	}
*/

struct SinhVien{
	string id;
	string name;
	int age;
	double gpa;
	
	SinhVien(){
		
	}
	
	SinhVien(string id, string name, int age, double gpa){
		this->id = id;
		this->name = name;
		this->age = age;
		this->gpa = gpa;
	}
	
	void nhap(){
		cout<<"nhap ma sinh vien: ";
		cin>>id;
		cout<<"nhap ho va ten: ";
		cin.ignore();
		getline(cin,name);
		cout<<"nhap tuoi: ";
		cin>>age;
		cout<<"nhap diem trung binh: ";
		cin>>gpa;
	}
	
	void xuat(){
		cout<<"msv: "<<id<<" hoten: "<<name<<" tuoi: "<<age<<" gpa: "<<gpa<<endl;
	}
	
};

void inputList(vector<SinhVien*>& list, int n){
	for(int i = 0; i< n; i++){
		SinhVien* sv = new SinhVien();
		sv->nhap();
		list.push_back(sv);	
	}
}

void outputList(vector<SinhVien*>& list){
	for(SinhVien* a : list){
		a->xuat();
	}
}

// sap xep tang dan
void sortList(vector<SinhVien*>& list){
	for(int i = 0; i<list.size()-1; i++){
		for(int j = i+1; j<list.size(); j++){
			if(list[i]->gpa > list[j]->gpa){
				SinhVien* temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
}

int binary_search(vector<SinhVien*>& list,int l, int r, double key){
	if(r<l)	// truong hop mang rong
		return -1; 
	else{
		int m = (l+r)/2;
		if(list[m]->gpa ==key){
			return m;
		}
		else if(list[m]->gpa > key)
			return binary_search(list,l,m-1,key);
		else
			return binary_search(list,m+1,r,key);
	}
	
}

int main(){
	vector<SinhVien*> list;
	int n;
	do{
		cout<<"nhap so luong sinh vien: ";
		cin>>n;
	}while(n<=0 || n >= 100);
	
	inputList(list,n);
	cout<<"danh sach sinh vien: "<<endl;
	outputList(list);
	cout<<"----------------------------------------"<<endl;
	cout<<"danh sach sinh vien da sap xep theo gpa: "<<endl;
	sortList(list);
	outputList(list);
	cout<<"-----------------------------------------"<<endl;
	double findGpa;
	cout<<"nhao diem gpa can tim: ";
	cin>>findGpa;
	int index = binary_search(list,0,n-1,findGpa);
	if( index == -1){
		cout<<"sinh vien do khong ton tai"<<endl;
	}
	else{
		cout<<"sinh sinh co diem bang "<<findGpa<<" la: "<<endl;
		list[index]->xuat();
	}
	
	
	
	
	for(SinhVien* a : list){
		delete a;
	}
	
	list.clear();
	
	return 0;
}