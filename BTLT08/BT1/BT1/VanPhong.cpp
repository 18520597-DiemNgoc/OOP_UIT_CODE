#include "VanPhong.h"

VanPhong::VanPhong(){}
VanPhong::~VanPhong(){}

void VanPhong::Nhap() {
	NhanVien::Nhap();
	cout << "So ngay lam viec: ";
	cin >> songaylamviec;
}

void VanPhong::Xuat() {
	NhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << songaylamviec;
}

long VanPhong::Luong() {
	return songaylamviec * 100000;
}