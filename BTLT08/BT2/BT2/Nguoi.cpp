#include<iostream>
#include <string>
#include "Nguoi.h"

using namespace std;

Nguoi::Nguoi(){}
Nguoi::~Nguoi(){}

void Nguoi::Nhap() {
	cout << "Ho ten: ";
	rewind(stdin);
	cin.getline(ho_ten, 100);
	cout << "Dia chi: ";
	rewind(stdin);
	cin.getline(dia_chi, 100);
	cout << "Nam sinh: ";
	cin >> nam_sinh;
}

void Nguoi::Xuat() {
	cout << "\nHo ten: " << ho_ten;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nNam sinh: " << nam_sinh;
}