#include<iostream>
#include "Diem.h"

using namespace std;

Diem::Diem() {
	x = 0;
	y = 0;
}

Diem::Diem(float x, float y) {
	x = 0;
	y = y;
}

Diem::Diem(const Diem& A) {
	x = A.x;
	y = A.y;
}

Diem::~Diem() {}

void Diem::Nhap() {
	cin >> x >> y;
}

void Diem::Xuat() {
	cout << "(" << x << " , " << y << ")\t";
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
float Diem::TinhKhoangCach(Diem B) {
	return sqrt(pow(x - B.x, 2) + pow(y - B.y, 2));
}

void Diem::TinhTien(Diem vecto) {
	x = x + vecto.x;
	y = y + vecto.y;
}

