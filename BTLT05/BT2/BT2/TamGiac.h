#pragma once
#include "Diem.h"

using namespace std;

class TamGiac {
private:
	Diem A, B, C;
public:
	TamGiac();
	TamGiac(Diem A, Diem B, Diem C);
	~TamGiac();
	void Nhap();
	void Xuat();
	TamGiac TinhTien(Diem v);
	void TrongTam();
	void Quay(float rad);
	void ZoomInOut(float k);
};

