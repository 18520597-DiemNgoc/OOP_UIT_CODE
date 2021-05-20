#pragma once

class Nguoi {
protected:
	char ho_ten[100], dia_chi[100];
	int nam_sinh;
public:
	Nguoi();
	~Nguoi();
	virtual void Nhap();
	virtual void Xuat();
};
