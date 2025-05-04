#include<iostream>

using namespace std;

/* khai bao danh sach ke tiep

#define MAX N

struct dataType{
	// cac thanh phan du lieu
};

struct List{
	int count;		// luu chi so phan tu mang, luu tru phan tu cuoi cung trong danh sach
	dataType e[MAX]	// mang 1 chieu luu cac phan tu
};

List L; // khai bao danh sach L

*/

/* khoi tao danh sach rong

void create (List &L){
	L.count=-1;
}

*/

/* kiem tra danh sach rong

int empty(List L){
	return (L.count==-1);
}
*/

/*	kiem tra danh sach day

int full(List L){
	return (l.count==MAX-1);
}
*/

/*	Them 1 phan tu vao cuoi danh sanh
// dieu kien: danh sach chua day

int add(List &L, DataType elem){
	if(full(L))
		return 0;
	else{
		L.count++;
		L.e[l.count] = elem;
		return 1;
	}
}

*/

/* xoa bo phan tu thu k khoi danh sach

int remove(List &L, int k){
	if(k>0 && k <= L.count+1){
		for(int i = k; i<= L.count; i++){
			L.e[i-1] = L.e[i];
			
		}
		L.count = L.count -1;
		return 1;
	}
	else
		return 0;
}

*/

/* chen 1 phan tu vap vi tri k trong danh sach

int insert(List &L, int k, DataType elem){
	if(k <= L.count+1 && k>0 && !full(L)){
		for(int i = L.count; i >= k-1; i--){
			L.e[i+1] = L.e[i];
		}
		L.e[k-1] = elem;
		L.count ++;
		return 1;
	}
	else
		return 0;
	
}


*/

#define MAX 5

struct SinhVien{
	string msv;
	string hoDem;
	string ten;
	string gioiTinh;
	int namSinh;
	float diemTK;
	
	SinhVien(string msv, string hoDem, string ten, string gioiTinh, int namSinh ,float diemTK){
		this->msv = msv;
		this->hoDem = hoDem;
		this->ten= ten;
		this->gioiTinh = gioiTinh;
		this->namSinh = namSinh;
		this->diemTK = diemTK;
	}
	
	SinhVien(){
	}
	
	void display(){
		cout<<"MaSV: "<<msv<<" HoDen: "<<hoDem<<" ten: "<<ten<<" gioiTinhL: "<<gioiTinh<<" namSinh: "<<namSinh<<" diemTK: "<<diemTK<<endl;
	}
	
};

struct List{
	int count;
	SinhVien e[MAX];
};

List L;

void create(List &L){
	L.count=-1;
}

int empty(List L){
	return (L.count==-1);
}

int full(List L){
	return (L.count == MAX-1);
}

int add(List &L, SinhVien elem){
	if(full(L)){
		return 0;
	}
	else{
		L.count++;
		L.e[L.count] = elem;
		return 1;
	}
}

int remove(List &L, int k){
	if(k>0 && k <= L.count+1){
		for(int i = k; i<L.count+1; i++){
			L.e[i-1] = L.e[i];
		}
		L.count = L.count-1;
		return 1;
	}
	else{
		return 0;
	}
	
}

int insert(List &L, int k, SinhVien elem){
	if(k>0 && k <=L.count+1 && !full(L)){
		for(int i = L.count; i>=k-1; i--){
			L.e[i+1]=L.e[i];
		}
		L.e[k-1] = elem;
		L.count++;
		return 1;
	}
	else{
		return 0;
	}
}

bool checkTen(SinhVien a, SinhVien b){
	return (a.ten>b.ten);
}

void selectionSort(List &L){
	for(int i = 0; i< L.count; i++){
		int min = i;
		for(int j = i+1; j< L.count; j++){
			if(checkTen(L.e[j],L.e[min]))
				min = j;
		}
		SinhVien temp = L.e[i];
		L.e[i] = L.e[min];
		L.e[min] = temp;
	}	
}

void hienthi(List L){
	for(int i = 0; i<= L.count; i++){
		L.e[i].display();
	}
}

int main(){
	create(L);
	
	SinhVien sv1 = {"1001","Tran Van","Thanh","Nam",1997,7.5};
	SinhVien sv2 = {"1002","Nguyen Thi","Huong","Nu",1998,7.2};
	SinhVien sv3 = {"1003","Nguyen Van","Binh","Nam",1996,6.4};
	SinhVien sv4 = {"1004","Bui Thi","Huong","Nu",1998,8.6};
	SinhVien sv5 = {"1005","Duong Van","Giang","Nam",1997,6.8};
	
	add(L,sv1);
	add(L,sv2);
	add(L,sv3);
	add(L,sv4);
	add(L,sv5);
	
	cout<<"danh sach Ban dau la: "<<endl;
	hienthi(L);
	cout<<"--------------------------------"<<endl;
	cout<<"danh sach sau khi xoa phan tu dau tien la: "<<endl;
	remove(L,1);
	hienthi(L);
	
	cout<<"---------------------------------"<<endl;
	cout<<"danh sach sau khi them sinh vien la: "<<endl;
	SinhVien sv6 = {"1006","Le Thi","Doan","Nu",1998,7.6};
	insert(L,3,sv6);
	hienthi(L);
	
	cout<<"--------------------------------"<<endl;
	cout<<"danh sach sau khi sap xep la: "<<endl;
	selectionSort(L);
	hienthi(L);
	return 0;
}