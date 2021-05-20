#pragma once
#include "Nguoi.h"

class SinhVien :public Nguoi {
private:
	int MaSV;
	float DiemTB;
public:
	SinhVien();
	~SinhVien();
	void Nhap();
	void Xuat();
};
