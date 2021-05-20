#include <iostream>
#include "Diem.h"
#include "nTamGiac.h"


using namespace std;

int main() {
	nTamGiac T;
	Diem v;
	int n;
	
	cout << "Nhap so luong tam giac: ";
	cin >> n;
	T.Nhap(n);

	cout << "\nNhap toa do vecto tinh tien v: ";
	v.Nhap();

	cout << "***************RESULT***************";
	cout << "\nCac tam giac vua nhap: ";
	T.Xuat(n);

	T.Max_ChuViDienTich(n);
	
	cout << "\n\nCac tam giac sau khi tinh tien: \n";
	T.TinhTien(v, n);
	T.Xuat(n);

	return 0;
}