#include "QuanLyNV.h"
#include "VanPhong.h"
#include "SanXuat.h"

QuanLyNV::QuanLyNV() {
	n = 0;
	ds = new NhanVien * [1000];
}

QuanLyNV::~QuanLyNV() {
	delete[]ds;
}

void QuanLyNV::Nhap() {
	int k;

	cout << "Nhap so luong nhan vien: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Chon loai nhan vien\n1. Nhan vien van phong\n2. Nhan vien san xuat\n=> ";
		cin >> k;

		if (k != 1 && k != 2) {
			cout << "\nKhong hop le... Chon lai tu dau\n";
			Nhap();
		}
		else if (k == 1) {
			ds[i] = new VanPhong;
		}
		else ds[i] = new SanXuat;
		ds[i]->Nhap();
	}
}

void QuanLyNV::Xuat() {
	for (int i = 0; i < n; i++) {
		ds[i]->Xuat();
		cout << "\nLuong: " << ds[i]->Luong();
	}
}

void QuanLyNV::TinhLuong() {
	long l_max, l_min;
	int imax = 0, imin = 0;

	l_max = ds[0]->Luong();
	l_min = ds[0]->Luong();

	for (int i = 1; i < n; i++) {
		if (ds[i]->Luong() > l_max) {
			l_max = ds[i]->Luong();
			imax = i;
		}
		else if (ds[i]->Luong() < l_min) {
			imin = i;
			l_min = ds[i]->Luong();
		}
	}

	cout << "\nNhan vien co luong thap nhat: ";
	ds[imin]->Xuat();
	cout << "\nLuong: " << l_min;

	cout << "\nNhan vien co luong cao nhat: ";
	ds[imax]->Xuat();
	cout << "\nLuong: " << l_max;
}