#include <iostream>
#include <math.h>

using namespace std;

struct PhanSo {
	int TuSo, MauSo;
};

void Nhap(PhanSo& PS) {
	cout << "Nhap tu so va mau so: ";
	cin >> PS.TuSo >> PS.MauSo;
}

void RutGon(PhanSo& PS) {
	int t = abs(PS.TuSo);
	int m = abs(PS.MauSo);

	
	while (t != m) {
		if (t > m) t -= m;
		else m -= t;
	}

	PS.TuSo /= t;
	PS.MauSo /= t;
}

void Xuat(PhanSo& PS) {
	cout << PS.TuSo << "/" << PS.MauSo;
}

int main() {
	PhanSo PS;

	Nhap(PS);
	cout << "\Phan so vua nhap la: ";
	Xuat(PS);
	
	RutGon(PS);

	cout << "\nPhan so sau rut gon la: ";
	Xuat(PS);

	return 0;

}