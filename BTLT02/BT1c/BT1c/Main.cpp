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

int BCNN(int a, int b) {
	return (a * b) / UCLN(a, b);
}

PhanSo Cong(PhanSo& PS1, PhanSo& PS2) {
	PhanSo KQ;
	int temp = BCNN(PS1.MauSo, PS2.MauSo);

	KQ.TuSo = PS1.TuSo * (temp / PS1.MauSo) + PS2.TuSo * (temp / PS2.MauSo);
	KQ.MauSo = temp;

	return KQ;
}

PhanSo Tru(PhanSo& PS1, PhanSo& PS2) {
	PhanSo KQ;
	int temp = BCNN(PS1.MauSo, PS2.MauSo);

	KQ.TuSo = PS1.TuSo * (temp / PS1.MauSo) - PS2.TuSo * (temp / PS2.MauSo);
	KQ.MauSo = temp;

	return KQ;
}

PhanSo Nhan(PhanSo& PS1, PhanSo& PS2) {
	PhanSo KQ;
	
	KQ.TuSo = PS1.TuSo * PS2.TuSo;
	KQ.MauSo = PS1.MauSo * PS2.MauSo;

	return KQ;
}

PhanSo Chia(PhanSo& PS1, PhanSo& PS2) {
	PhanSo KQ;
	int temp = BCNN(PS1.MauSo, PS2.MauSo);

	KQ.TuSo = PS1.TuSo * PS2.MauSo;
	KQ.MauSo = PS1.MauSo * PS2.TuSo;

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

	KQ = Cong(PS1, PS2);
	cout << "\nTong 2 phan so: ";
	Xuat(KQ);

	KQ = Tru(PS1, PS2);
	cout << "\nHieu 2 phan so: ";
	Xuat(KQ);

	KQ = Nhan(PS1, PS2);
	cout << "\nTich 2 phan so: ";
	Xuat(KQ);

	KQ = Chia(PS1, PS2);
	cout << "\nThuong 2 phan so: ";
	Xuat(KQ);

	return 0;

}