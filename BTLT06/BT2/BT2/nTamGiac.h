#pragma once
#include "TamGiac.h"
#include "Diem.h"

class nTamGiac {
private:
	TamGiac* ds_tg;
public:
	nTamGiac();
	~nTamGiac();
	nTamGiac(TamGiac*, int);
	void Nhap(int);
	void Xuat(int);
	void Max_ChuViDienTich(int);
	void TinhTien(Diem, int);
};
