#include <iostream>
#include"SinhVien.h"

using namespace std;

SinhVien::SinhVien(){}
SinhVien::~SinhVien(){}

void SinhVien::Nhap() {
	cout << "Ma sinh vien: ";
	cin >> MaSV;
	Nguoi::Nhap();
	cout << "Diem trung binh: ";
	cin >> DiemTB;
}

void SinhVien::Xuat() {
	cout << "\nMa sinh vien: " << MaSV;
	Nguoi::Xuat();
	cout << "\nNoi lam viec: Truong hoc";
	cout << "\nDiem trung binh: " << DiemTB;
}