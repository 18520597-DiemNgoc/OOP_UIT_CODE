#include<iostream>
#include "TamGiac.h"

TamGiac::TamGiac() {}

TamGiac::TamGiac(Diem x[]) {
	ds_dinh = new Diem[3];

	for (int i = 0; i < 3; i++)
		ds_dinh[i] = x[i];
}

TamGiac::~TamGiac() {
	delete[]ds_dinh;
}

void TamGiac::Nhap() {
	ds_dinh = new Diem[3];
	float AB, AC, BC;

	for (int i = 0; i < 3; i++) {
		cout << "\nDinh thu " << i + 1 << ": ";
		ds_dinh[i].Nhap();
	}

	AB = ds_dinh[0].TinhKhoangCach(ds_dinh[1]);
	BC = ds_dinh[1].TinhKhoangCach(ds_dinh[2]);
	AC = ds_dinh[0].TinhKhoangCach(ds_dinh[2]);

	if (AB + AC <= BC || AB + BC <= AC || AC + BC <= AB) {
		cout << "\nDay khong phai la tam giac. Vui long nhap lai...\n";
		Nhap();
	}
}

void TamGiac::Xuat() {
	for (int i = 0; i < 3; i++) {
		cout << "\nDinh thu " << i + 1 << ": ";
		ds_dinh[i].Xuat();
	}
}

void TamGiac::TinhTien(Diem v) {
	for (int i = 0; i < 3; i++)
		ds_dinh[i].TinhTien(v);
}

float TamGiac::ChuVi() {
	float AB, AC, BC;

	AB = ds_dinh[0].TinhKhoangCach(ds_dinh[1]);
	BC = ds_dinh[1].TinhKhoangCach(ds_dinh[2]);
	AC = ds_dinh[0].TinhKhoangCach(ds_dinh[2]);

	return AB + BC + AC;
}

float TamGiac::DienTich() {
	float AB, AC, BC, p;

	AB = ds_dinh[0].TinhKhoangCach(ds_dinh[1]);
	BC = ds_dinh[1].TinhKhoangCach(ds_dinh[2]);
	AC = ds_dinh[0].TinhKhoangCach(ds_dinh[2]);
	p = ChuVi() / 2;

	return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}
