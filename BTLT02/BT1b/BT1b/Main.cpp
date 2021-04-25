#include <iostream>
#include <math.h>

using namespace std;

struct PhanSo {
	int TuSo, MauSo;
};

void Nhap(PhanSo& PS) {
	cout << "\nNhap tu so va mau so: ";
	cin >> PS.TuSo >> PS.MauSo;
}

int UCLN(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}

	while (a != b) {
		if (a > b) a = a - b;
		else b = b - a;
	}

	return a;
}

PhanSo SoSanh(PhanSo& PS1, PhanSo& PS2) {
	PhanSo KQ;
	int temp = (PS1.MauSo * PS2.MauSo) / UCLN(PS1.MauSo, PS2.MauSo);
	
	if (PS1.TuSo * temp > PS2.TuSo* temp) {
		KQ.TuSo = PS1.TuSo;
		KQ.MauSo = PS1.MauSo;
	}
	else {
		KQ.TuSo = PS2.TuSo;
		KQ.MauSo = PS2.MauSo;
	}

	return KQ;
}

void Xuat(PhanSo& PS) {
	cout << PS.TuSo << "/" << PS.MauSo << "\n";
}

int main() {
	PhanSo PS1, PS2, KQ;

	cout << "Phan so 1";
	Nhap(PS1);

	cout << "\nPhan so 2";
	Nhap(PS2);

	KQ = SoSanh(PS1, PS2);

	cout << "\nPhan so lon nhat la: ";
	Xuat(KQ);

	return 0;

}