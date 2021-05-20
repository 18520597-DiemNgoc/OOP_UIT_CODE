#pragma once
#include "Nguoi.h"

class CongNhan :public Nguoi {
private:
	long luong_co_ban;
	int so_ngay_phep, so_nam_kinh_nghiem;
public:
	CongNhan();
	~CongNhan();
	void Nhap();
	void Xuat();
};

