#include <iostream>

using namespace std;

class PhanSo {
private:
	int iTu, iMau;
public:
	void Nhap();
	void Set();
	void Xuat();
	int UCLN(int a, int b);
	int BCNN(int a, int b);
	PhanSo Cong(PhanSo A);
	PhanSo Tru(PhanSo A);
	PhanSo Nhan(PhanSo A);
	PhanSo Chia(PhanSo A);
};

void PhanSo::Set() {
	iTu = 9;
	iMau = 1;
}

void PhanSo::Nhap() {
	cin >> iTu >> iMau;

	if (iMau == 0) {
		PhanSo::Set();
	}
}

void PhanSo::Xuat() {
	cout << iTu << "/" << iMau;
}


int PhanSo::UCLN(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}

	while (a != b) {
		if (a > b) a = a - b;
		else b = b - a;
	}

	return a;
}

int PhanSo::BCNN(int a, int b) {
	return (a * b) / UCLN(a, b);
}

PhanSo PhanSo::Cong(PhanSo A) {
	
	PhanSo Tong;
	int BCNN = PhanSo::BCNN(iMau, A.iMau);

	Tong.iTu = iTu * (BCNN / iMau) + A.iTu * (BCNN / A.iMau);
	Tong.iMau = BCNN;

	return Tong;
}

PhanSo PhanSo::Tru(PhanSo A) {

	PhanSo Hieu;
	int BCNN = PhanSo::BCNN(iMau, A.iMau);

	Hieu.iTu = iTu * (BCNN / iMau) - A.iTu * (BCNN / A.iMau);
	Hieu.iMau = BCNN;

	return Hieu;
}

PhanSo PhanSo::Nhan(PhanSo A) {

	PhanSo Tich;

	Tich.iTu = iTu * A.iTu;
	Tich.iMau = iMau * A.iMau;

	return Tich;
}

PhanSo PhanSo::Chia(PhanSo A) {

	PhanSo Thuong;

	Thuong.iTu = iTu * A.iMau;
	Thuong.iMau = iMau * A.iTu;

	return Thuong;
}
int main() {
	PhanSo A, B, Tong, Hieu, Tich, Thuong;
	
	cout << "Nhap tu va mau phan so 1: ";
	A.Nhap();
	cout << "\nNhap tu va mau phan so 2: ";
	B.Nhap();

	Tong = A.Cong(B);
	cout << "\nTong 2 phan so la: ";
	Tong.Xuat();

	Hieu = A.Tru(B);
	cout << "\nHieu 2 phan so la: ";
	Hieu.Xuat();

	Tich = A.Nhan(B);
	cout << "\nTich 2 phan so la: ";
	Tich.Xuat();

	Thuong = A.Chia(B);
	cout << "\nThuong 2 phan so la: ";
	Thuong.Xuat();

	return 0;
}