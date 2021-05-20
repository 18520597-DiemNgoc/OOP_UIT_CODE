#include<iostream>
#include "Diem.h"
#include "nDiem.h"

using namespace std;

float main() {
	nDiem ds;
	Diem v;
	int n;

	cout << "Nhap so luong phan tu: ";
	cin >> n;
	ds.NhapDiem(n);

	cout << "\nNhap toa do vecto tinh tien: ";
	v.Nhap();

	cout << "\nCac diem vua nhap: ";
	ds.XuatDiem(n);
	ds.KhoangCach(n);

	cout << "\nCac diem sau khi tinh tien: ";
	ds.TinhTienDiem(v, n);
	ds.XuatDiem(n);

	return 0;
}