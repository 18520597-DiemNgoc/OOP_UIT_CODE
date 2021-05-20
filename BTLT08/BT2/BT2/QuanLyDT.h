#pragma once
#include "Nguoi.h"
#include <vector>

using namespace std;

class QuanLyDT {
private:
	Nguoi** ds;
	int n;
public:
	QuanLyDT();
	~QuanLyDT();
	void Nhap();
	void Xuat();
};
