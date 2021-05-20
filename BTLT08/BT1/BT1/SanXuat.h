#pragma once
#include "NhanVien.h"

class SanXuat: public NhanVien {
private:
	long luongcoban, sosp;
public:
	SanXuat();
	~SanXuat();
	void Nhap();
	void Xuat();
	long Luong();
};
