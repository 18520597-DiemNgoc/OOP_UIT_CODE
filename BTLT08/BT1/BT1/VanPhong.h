#pragma once
#include "NhanVien.h"

class VanPhong : public NhanVien {
private:
	long songaylamviec;
public:
	VanPhong();
	~VanPhong();
	void Nhap();
	void Xuat();
	long Luong();
};
