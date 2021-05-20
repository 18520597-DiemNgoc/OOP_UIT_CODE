#include <iostream>
#include "Diem.h"
#include "TamGiac.h"
#include "nTamGiac.h"

using namespace std;

nTamGiac::nTamGiac() {}

nTamGiac::nTamGiac(TamGiac *tg, int n) {
	ds_tg = new TamGiac[n];

	for (int i = 0; i < n; i++)
		ds_tg[i] = tg[i];
}

void nTamGiac::Nhap(int n) {
	ds_tg = new TamGiac[n];
	
	for (int i = 0; i < n; i++) {
		cout << "\nTam giac thu " << i + 1 << ": ";
		ds_tg[i].Nhap();
		cout << "\n============";
	}
}

void nTamGiac::Xuat(int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nTam giac thu " << i + 1 << ": ";
		ds_tg[i].Xuat();
		cout << "\n=============";
	}
}
nTamGiac::~nTamGiac() {
	delete[]ds_tg;
}

void nTamGiac::Max_ChuViDienTich(int n) {
	float Cmax, Smax, temp;
	int imax;

	Cmax = ds_tg[0].ChuVi();

	for (int i = 1; i < n; i++) { 
		temp = ds_tg[i].ChuVi();
		if (Cmax < temp) {
			Cmax = temp;
			imax = i;
		}
	}
	Smax = ds_tg[imax].DienTich();
	cout << "\nCmax = " << Cmax;
	cout << "\tSmax = " << Smax;
	cout << "\nTam giac co chu vi - dien tich lon nhat: ";
	ds_tg[imax].Xuat();
}

void nTamGiac::TinhTien(Diem v, int n) {
	for (int i = 0; i < n; i++)
		ds_tg[i].TinhTien(v);
}
