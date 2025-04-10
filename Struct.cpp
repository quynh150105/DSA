#include<iostream>
#include<iomanip>

using namespace std;

/* khai bao struct
struct ten-struc{
	// member
}

vi du:
struct SinhVien{
	string msv;
	string ten;
	double gpa;
	string dc;
};

// nhap thong tin cho struct
	cin>>x.msv;
	cin.ignore();
	getline(cin,x.ten);
	cin>>x.gpa;
	cin.ignore();
	getline(cin,x.dc);
*/

struct SinhVien{
	string msv;
	string ten;
	double gpa;
	string dc;
	
	// constructor
	SinhVien(){
		 msv = "abcd";
		 ten="quynh dep trai";
		 gpa = 3.24;
		 dc = "hanoi";
	}
	
	// constructor du tham so
	SinhVien(string ma, string name, double diem, string diachi ){
		msv = ma;
		ten = name;
		gpa = diem;
		dc = diachi;
	}
	
	void in(){
		cout<<msv<<" "<<ten<<" "<<fixed<<setprecision(2)<<gpa<<" "<<dc<<endl;
	}
	
	void nhap(){
		cin>>msv;
		cin.ignore();
		getline(cin,ten);
		cin>>gpa;
		cin.ignore();
		getline(cin,dc);
	}
	
};

// nap chong phuong thuc
struct sophuc{
	int a,b;
	// kieu_tra_ve operator(=,-,..)(danh sach tham so){
		//code	
	// dinh nghia toan tu cong (+) 2 so phuc
	sophuc operator + (const sophuc other){
		sophuc tong;
		tong.a = a + other.a;
		tong.b = b + other.b;
		return tong;
	}
};

int main(){
//	SinhVien x{"123ad","le nhu quynh",3.14,"hanoi"};
//	SinhVien y = x;
//	SinhVien C;
////	x.nhap();
//	x.in();
//	y.in();
//	C.in();
//	SinhVien x;
//	x.in();
//	SinhVien z("123sasd","A",3.2,"nam hinh");
//	z.in();
	sophuc a{1,2},b{3,4};
	sophuc c = a + b;
	cout<<c.a<<" "<<c.b<<endl;
	return 0;
}















