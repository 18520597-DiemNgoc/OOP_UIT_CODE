#include <iostream>
#include "DaGiac.h"

using namespace std;

DaGiac::DaGiac(){}

DaGiac::DaGiac(Diem x[], int n) {
	ds = new Diem[n];

	for (int i = 0; i < n; i++) {
		ds[i] = x[i];
	}
}

DaGiac::~DaGiac(void) {
	delete[]ds;
}

void DaGiac::Nhap(int n) {
	float AB, BC, AC;
	ds = new Diem[n];
	
	for (int i = 0; i < n; i++) {
		cout << "\nNhap toa di dinh thu " << i + 1 << ": ";
		ds[i].Nhap();
	}

	if (n == 3) {
		AB = ds[0].TinhKhoangCach(ds[1]);
		BC = ds[1].TinhKhoangCach(ds[2]);
		AC = ds[2].TinhKhoangCach(ds[0]);

		if (AB + AC <= BC || AB + BC <= AC || AC + BC <= AB) {
			cout << "\nDay khong phai la tam giac. Vui long nhap lai...";
			Nhap(n);
		}
	}
}

void DaGiac::Xuat(int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nDinh thu " << i + 1 << ":";
		ds[i].Xuat();
	}
}

void DaGiac::TinhTien(Diem v, int n) {
	for (int i = 0; i < n; i++) {
		ds[i].TinhTien(v);
	}
}

void DaGiac::Quay(float rad, int n) {
	for (int i = 0; i < n; i++) {
		ds[i].PhepQuay(rad);
	}
}

void DaGiac::ZoomInOut(float k, int n) {
	for (int i = 0; i < n; i++) {
		ds[i].setXY(ds[i].getX() * k, ds[i].getY() * k);
	}
}

