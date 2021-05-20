#include <iostream>
#include "Diem.h"
#include "TamGiac.h"

using namespace std;

int main() {
	TamGiac t, x;
	Diem v;
	float k, rad;

	t.Nhap();
	cout << "Nhap toa do vecto tinh tien v: ";
	v.Nhap();

	cout << "Nhap he so phong to/thu nho: ";
	cin >> k;

	cout << "Ban muon quay goc bao nhieu? ";
	cin >> rad;

	t.Xuat();

	cout << "\nTam giac duoc tinh tien theo vecto v: ";
	x = t.TinhTien(v);
	x.Xuat();

	cout << "\nDiem trong tam cua tam giac: ";
	t.TrongTam();

	cout << "\nTam giac moi sau khi quay goc voi 3 dinh A, B, C lan luot: ";
	t.Quay(rad);
	t.Xuat();

	cout << "\nTam giac sau khi phong to/thu nho voi 3 dinh lan luot: ";
	t.ZoomInOut(k);
	t.Xuat();

	return 0;
}