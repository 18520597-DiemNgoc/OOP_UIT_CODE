#include <iostream>
#include "Diem.h"
#include <math.h>
using namespace std;

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

float Diem::TinhKhoangCach(Diem B) {
	return sqrt(pow((x - B.x), 2) + pow((y - B.y), 2));
}

Diem Diem::TinhTien(Diem vector) {
	Diem N;
	N.x = x + vector.x;
	N.y = y + vector.y;

	return N;
}

void Diem::PhepQuay(float rad) {
	x = x * cos(rad) + y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}
