#pragma once
#include "NhanVien.h"
#include <vector>

using namespace std;

class QuanLyNV {
private: 
	NhanVien** ds;
	int n;
public:
	QuanLyNV();
	~QuanLyNV();
	void Nhap();
	void Xuat();
	void TinhLuong();
};
