#include <iostream>
#include "nDiem.h"

using namespace std;

nDiem::nDiem(){}

nDiem::nDiem(Diem x[], int n) {
	ds = new Diem[n];

	for (int i = 0; i < n; i++)
		ds[i] = x[i];
}

nDiem::~nDiem() {
	delete[]ds;
}

void nDiem::NhapDiem(int n) {
	ds = new Diem[n];

	for (int i = 0; i < n; i++) {
		cout << "Nhap toa do diem thu " << i + 1 << ": ";
		ds[i].Nhap();
	}
}

void nDiem::XuatDiem(int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nDiem thu " << i + 1 << ": ";
		ds[i].Xuat();
	}
}

void nDiem::TinhTienDiem(Diem v, int n) {
	for (int i = 0; i < n; i++)
		ds[i].TinhTien(v);
}

void nDiem::KhoangCach(int n) {
	float dmax, dmin, d;
	Diem* kq = new Diem[4];

	dmax = ds[0].TinhKhoangCach(ds[1]);
	dmin = ds[0].TinhKhoangCach(ds[1]);

	for (int i = 1; i < n - 1; i++)
		for (int j = i + 1; j < n; j++) {
			d = ds[i].TinhKhoangCach(ds[j]);
			if (d > dmax) {
				dmax = d;
				kq[0] = ds[i];
				kq[1] = ds[j];
			}
			else if (d < dmin) {
				dmin = d;
				kq[2] = ds[i];
				kq[3] = ds[j];
			}
		}

	cout << "\n2 diem co khoang cach lon nhat: ";
	kq[0].Xuat();
	kq[1].Xuat();
	cout << "\tdmax = " << dmax;

	cout << "\n2 diem co khoang cach nho nhat: ";
	kq[2].Xuat();
	kq[3].Xuat();
	cout << "\tdmin = " << dmin;
}