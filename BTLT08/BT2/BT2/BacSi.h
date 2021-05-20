#pragma once
#include "Nguoi.h"
#include <string>

class BacSi :public Nguoi {
private:
	char khoa_chuyen_mon[20];
	int so_nam_chua_benh;
public:
	BacSi();
	~BacSi();
	void Nhap();
	void Xuat();
};

