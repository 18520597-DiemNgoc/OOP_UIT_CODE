#include "SanXuat.h"

SanXuat::SanXuat(){}
SanXuat::~SanXuat(){}

void SanXuat::Nhap() {
	NhanVien::Nhap();
	cout << "Luong co ban: ";
	cin >> luongcoban;
	cout << "So san pham: ";
	cin >> sosp;
}

void SanXuat::Xuat() {
	NhanVien::Xuat();
	cout << "\nLuong co ban: " << luongcoban;
	cout << "\nSo san pham: " << sosp;
}

long SanXuat::Luong() {
	return luongcoban + sosp * 5000;
}