#include<iostream>
#include "TamGiac.h"

TamGiac::TamGiac() {}
TamGiac::~TamGiac() {}

TamGiac::TamGiac(Diem A, Diem B, Diem C) {
	A = A;
	B = B;
	C = C;
}

void TamGiac::Nhap() {
	float AB, AC, BC;
	Diem D, E;

	cout << "Nhap dinh A: ";
	A.Nhap();

	cout << "Nhap dinh B: ";
	B.Nhap();

	cout << "Nhap dinh C: ";
	C.Nhap();

	AB = A.TinhKhoangCach(B);
	AC = A.TinhKhoangCach(C);
	BC = B.TinhKhoangCach(C);

	if (AB + AC <= BC || AB + BC <= AC || AC + BC <= AB) {
		cout << "\nDay khong phai la tam giac. Vui long nhap lai...\n";
		Nhap();
	}
}

void TamGiac::Xuat() {
	cout << "\nDinh A: ";
	A.Xuat();
	cout << "Dinh B: ";
	B.Xuat();
	cout << "Dinh C: ";
	C.Xuat();
}

TamGiac TamGiac::TinhTien(Diem v) {
	TamGiac Z;

	Z.A = A.TinhTien(v);
	Z.B = B.TinhTien(v);
	Z.C = C.TinhTien(v);

	return Z;
}

void TamGiac::TrongTam() {
	float x, y;

	x = (A.getX() + B.getX() + C.getX()) / 3;
	y = (A.getY() + B.getY() + C.getY()) / 3;
	cout << "G (" << x << ", " << y << ")\n";
}

void TamGiac::Quay(float rad) {
	A.PhepQuay(rad);
	B.PhepQuay(rad);
	C.PhepQuay(rad);
}

void TamGiac::ZoomInOut(float k) {
	A.setXY(A.getX() * k, A.getY() * k);
	B.setXY(B.getX() * k, B.getY() * k);
	C.setXY(C.getX() * k, C.getY() * k);
}