#include <iostream>
#include "NhanVien.h"

using namespace std;

NhanVien::NhanVien(){}
NhanVien::~NhanVien(){}

void NhanVien::Nhap() {
	cout << "Ho ten: ";
	rewind(stdin);
	cin.getline(HoTen, 100);
	cout << "Ngay sinh (dd/mm/yyyy): ";
	cin >> Ngay >> Thang >> Nam;
}

void NhanVien::Xuat() {
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << Ngay << "/" << Thang << "/" << Nam;
}

long NhanVien::Luong() {
	return 0;
}