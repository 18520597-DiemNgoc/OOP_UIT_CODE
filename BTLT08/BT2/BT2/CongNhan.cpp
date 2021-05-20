#include <iostream>
#include"CongNhan.h"

using namespace std;

CongNhan::CongNhan() {}
CongNhan::~CongNhan() {}

void CongNhan::Nhap() {
	Nguoi::Nhap();
	cout << "Luong co ban: ";
	cin >> luong_co_ban;
	cout << "So ngay nghi phep: ";
	cin >> so_ngay_phep;
	cout << "So nam kinh nghiem: ";
	cin >> so_nam_kinh_nghiem;
}

void CongNhan::Xuat() {
	Nguoi::Xuat();
	cout << "\nNoi lam viec: Nha may";
	cout << "\nLuong co ban: " << luong_co_ban;
	cout << "\nSo ngay nghi phep: " << so_ngay_phep;
	cout << "\nSo nam kinh nghiem: " << so_nam_kinh_nghiem;
}