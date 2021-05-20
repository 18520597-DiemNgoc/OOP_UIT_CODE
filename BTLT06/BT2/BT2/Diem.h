#pragma once

class Diem {
private:
	float x, y;
public:
	Diem();
	Diem(float x, float y);
	Diem(const Diem& A);
	~Diem();
	void Nhap();
	void Xuat();
	void setX(float a);
	void setY(float b);
	float getX();
	float getY();
	void setXY(float a, float b);
	float TinhKhoangCach(Diem B);
	void TinhTien(Diem vecto);
};

