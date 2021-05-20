#include <iostream>

using namespace std;

class Diem {
private:
	float x, y;
public:
	Diem();
	~Diem();
	void Nhap();
	void Xuat();
	void setX(float a);
	void setY(float b);
	float getX();
	float getY();
	void setXY(float a, float b);
	Diem TinhTien(Diem vecto);

};
Diem::Diem() {}
Diem::~Diem() {}

void Diem::Nhap() {
	cin >> x >> y;
}

void Diem::Xuat() {
	cout << "(" << x << ", " << y << ")\n";
}

void Diem::setX(float a) {
	x = a;
}

void Diem::setY(float b) {
	y = b;
}

float Diem::getX() {
	return x;
}

float Diem::getY() {
	return y;
}

void Diem::setXY(float a, float b) {
	x = a;
	y = b;
}
Diem Diem::TinhTien(Diem vector) {
	Diem N;
	N.x = x + vector.x;
	N.y = y + vector.y;

	return N;
}
float main() {
	Diem M, v, N;
	float a, b;

	cout << "Nhap hoanh to va tung do diem M:";
	M.Nhap();
	cout << "\nNhap hoanh do va tung do vecto v:";
	v.Nhap();

	N = M.TinhTien(v);
	cout << "\nPhep tinh tien theo vector v bien diem M thanh N voi N co toa do:";
	N.Xuat();

	return 0;
}