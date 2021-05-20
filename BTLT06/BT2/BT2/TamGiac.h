#pragma once
#include "Diem.h"

using namespace std;

class TamGiac {
private:
	Diem *ds_dinh;
public:
	TamGiac();
	TamGiac(Diem[]);
	~TamGiac();
	void Nhap();
	void Xuat();
	void TinhTien(Diem);
	float ChuVi();
	float DienTich();
};

