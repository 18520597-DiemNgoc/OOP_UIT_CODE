#include<iostream>
#include"QuanLyDT.h"
#include"SinhVien.h"
#include"BacSi.h"
#include"CaSi.h"
#include"CongNhan.h"

using namespace std;

QuanLyDT::QuanLyDT() {
	n = 0;
	ds = new Nguoi * [1000];
}

QuanLyDT::~QuanLyDT() {
	delete[]ds;
}

void QuanLyDT::Nhap() {
	int k, sv, cs, bs, cn;
	sv = 0;
	cs = 0;
	bs = 0;
	cn = 0;

	cout << "\nNhap so luong nguoi: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Nhap loai doi tuong:\n1. Sinh vien\n2. Cong nhan\n3. Ca si\n4. Bac si\n=>";
		cin >> k;

		if (k != 1 && k != 2 && k != 3 && k != 4) {
			cout << "\nKhong hop le... Chon lai...\n";
			Nhap();
		}
		else if (k == 1) {
			ds[i] = new SinhVien;
			sv++;
		}
		else if (k == 2) {
			ds[i] = new CongNhan;
			cn++;
		}
		else if (k == 3) {
			ds[i] = new CaSi;
			cs++;
		}
		else {
			ds[i] = new BacSi;
			bs++;
		}
		ds[i]->Nhap();
	}
	cout << "\n*********************Ket qua*********************";
	cout << "\n**So luong sinh vien da nhap: " << sv;
	cout << "\n**So luong cong nhan da nhap: " << cn;
	cout << "\n**So luong bac si da nhap: " << bs;
	cout << "\n**So luong ca si da nhap: " << cs;
}

void QuanLyDT::Xuat() {
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
}