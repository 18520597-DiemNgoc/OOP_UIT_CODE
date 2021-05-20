#pragma once
#include "Nguoi.h"

class CaSi :public Nguoi {
private:
	char dong_nhac[50];
	int so_show, so_album;
public:
	CaSi();
	~CaSi();
	void Nhap();
	void Xuat();
};
