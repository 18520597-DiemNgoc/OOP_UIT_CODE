#include <iostream>
#include "DaGiac.h"

using namespace std;

int main() {
	int n;
	float k, rad;
	DaGiac ds, kq;
	Diem v;

	cout << "Nhap so dinh cua da giac: ";
	cin >> n;

	if (n < 3)
		cout << "Day khong phai la da giac. ";
	else {
		ds.Nhap(n);

		cout << "Nhap toa do vecto tinh tien v: ";
		v.Nhap();

		cout << "Nhap he so phong to / thu nho: ";
		cin >> k;

		cout << "Nhap goc quay rad = ";
		cin >> rad;

		cout << "\nDa giac sau khi duoc tinh tien theo vecto v la: ";
		ds.TinhTien(v, n);
		ds.Xuat(n);

		cout << "\nDa giac sau khi duoc quay goc rad: ";
		ds.Quay(rad, n);
		ds.Xuat(n);

		cout << "\nDa giac sau khi duoc phong to/thu nho: ";
		ds.ZoomInOut(k, n);
		ds.Xuat(n);
	}

	return 0;
}