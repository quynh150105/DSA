#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void doc(){
	/*	 cach khai bao vector
	
		vector<datatype> name;
		
		vector<int> v1;                  // Vector rong
	    vector<int> v2(5, 10);           // Vector co 5 phan tu gia tri 10
	    vector<int> v3 = {1, 2, 3, 4, 5}; // Vector khoi tao bang danh sach
	    vector<int> v4(v3);              // Sao chep v3 vao v4	
	*/
	
	/* cac thao tac
	 +, them phan tu
	 	v.push_back(10);
	 	
	+, xoa phan tu
		v.pop_back(); 			// xoa phan tu cuoi
		v.erase(v.begin()); 	// xoa phan tu dau
		v.erase(v.begin() + n);	// xoa phan tu tai index n+1
		v.clear(); 				// xoa toan bo
	*/
	
	/*	Truy cap phan tu
		cout<<v.[0];		// truy cap phan tu dau tien (khong kiem tra gioi han)
		cout<<v.at(index);	//truy cap phan tu tai index (kiem tra gioi han)
		cout<<v.front();	// lay phan tu dau tien
		cout<<v.back();		// lay phan tu cuoi cung
	
	*/
	
	/* duyet vector
	
	+, for 
		for(int i = 0; i< v.size(); i++){
			cout<<v[i]<<" ";
		}
		
	+, for each
		for(int x : v){
			cout<<x<<" ";
		}
	*/
	
	/* cac phuong thuc hay dung voi vector
	v.size();		// tra ve so luong phan tu co trong vecto
	v.capacity();	// tra ve so luong co the chua ma khong can cap phat lai
	v.empty();		// kiem tra co rong hay khong
	v.resize(n); 	// thay doi kich thuoc thanh n phan tu
	v.insert(pos,val) // chen value vao vi tri pos
	v.assign(n,value)	// gan n phan tu co gia tri value
	*/
	
	/* sap xep vector vs algorithm
		sort(v.begin(),v.end());
		cout<<"vector sau khi sap xep: "<<endl;
		for(int a : v){
			cout<<a<<" ";
		}	
	
	*/
}

void nhap(vector<int>a, int n){
	for(int i = 0; i< n; i++){
		cout<<"nhap phan tu thu "<<i<<": ";
		int number;
		cin>>number;
		a.push_back(number);
	}
}

void xuat(vector<int>a){
	for(int x : a){
		cout<<x<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> a = {1,2,3,4};
	vector<int> b = {1,2,3,4};
	vector<int> c;
	for(int i = 0; i<a.size(); i++){
		int temp = a.at(i) + b.at(i);
		c.push_back(temp);
	}
	for(int x : c){
		cout<<x<<" ";
	}
	
	return 0;
}