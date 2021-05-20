#pragma once
#include "Diem.h"

class nDiem {
private:
	Diem* ds;
public:
	nDiem();
	nDiem(Diem[], int);
	~nDiem();
	void NhapDiem(int);
	void XuatDiem(int);
	void TinhTienDiem(Diem, int);
	void KhoangCach(int);
};
