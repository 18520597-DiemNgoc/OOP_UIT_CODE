#include <iostream>
#include"BacSi.h"

using namespace std;

BacSi::BacSi() {}
BacSi::~BacSi() {}

void BacSi::Nhap() {
	Nguoi::Nhap();
	rewind(stdin);
	cout << "Khoa chuyen mon: ";
	cin.getline(khoa_chuyen_mon, 20);
	cout << "So nam chua benh: ";
	cin >> so_nam_chua_benh;
}

void BacSi::Xuat() {
	Nguoi::Xuat();
	cout << "\nNoi lam viec: Benh vien";
	cout << "\nKhoa chuyen mon: " << khoa_chuyen_mon;
	cout << "\nSo nam chua benh: " << so_nam_chua_benh;
}