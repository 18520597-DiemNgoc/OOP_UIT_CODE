#include <iostream>
#include"CaSi.h"

using namespace std;

CaSi::CaSi() {}
CaSi::~CaSi() {}

void CaSi::Nhap() {
	Nguoi::Nhap();
	rewind(stdin);
	cout << "Dong nhac: ";
	cin.getline(dong_nhac, 50);
	cout << "So show da dien: ";
	cin >> so_show;
	cout << "So album da phat hanh: ";
	cin >> so_album;
}

void CaSi::Xuat() {
	Nguoi::Xuat();
	cout << "\nNoi lam viec: San khau";
	cout << "\nDong nhac: " << dong_nhac;
	cout << "\nSo show da dien: " << so_show;
	cout << "\nSo album da phat hanh: " << so_album;
}