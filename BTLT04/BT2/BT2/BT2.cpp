#include <iostream>
#include <math.h>

using namespace std;

class SoPhuc {
private:
	float iThuc, iAo;
public:
	SoPhuc(){}
	SoPhuc(float Thuc, float Ao) {
		this->iThuc = Thuc;
		this->iAo = Ao;
	}
	void Nhap();
	void Xuat();
	
	SoPhuc Cong(SoPhuc B);
	SoPhuc Tru(SoPhuc B);
	SoPhuc Nhan(SoPhuc B);
	SoPhuc Chia(SoPhuc B);
	~SoPhuc() {};
};


void SoPhuc::Nhap() {
	cout << "Nhap phan thuc va phan ao cua so phuc: ";
	cin >> iThuc >> iAo;
}

void SoPhuc::Xuat() {
	if (iAo == 0)
		cout << iThuc << endl;
	else if(iAo < 0) 
		cout << iThuc << " " << iAo << "j\n";
	else cout << iThuc << " + " << iAo << "j\n";
}

SoPhuc SoPhuc::Cong(SoPhuc B) {
	SoPhuc Sum;

	Sum.iThuc = iThuc + B.iThuc;
	Sum.iAo = iAo + B.iAo;

	return Sum;
}

SoPhuc SoPhuc::Tru(SoPhuc B) {
	SoPhuc Sub;

	Sub.iThuc = iThuc - B.iThuc;
	Sub.iAo = iAo - B.iAo;

	return Sub;
}

SoPhuc SoPhuc::Nhan(SoPhuc B) {
	SoPhuc Mul;

	Mul.iThuc = iThuc * B.iThuc - iAo * B.iAo;
	Mul.iAo = iThuc*B.iAo + iAo * B.iThuc;

	return Mul;
}

SoPhuc SoPhuc::Chia(SoPhuc B) {
	SoPhuc Div;

	Div.iThuc = (iThuc * B.iThuc + iAo * B.iAo) / (pow(B.iThuc, 2) + pow(B.iAo, 2));
	Div.iAo = (iAo * B.iThuc - iThuc * B.iAo) / (pow(B.iThuc, 2) + pow(B.iAo, 2));

	return Div;
}

int main() {
	SoPhuc A, B, Sum, Sub, Mul, Div;

	cout << "Nhap so phuc 1: \n";
	A.Nhap();

	cout << "\nNhap so phuc 2: \n";
	B.Nhap();

	cout << "\nSo phuc 1 : ";
	A.Xuat();

	cout << "\nSo phuc 2: ";
	B.Xuat();

	Sum = A.Cong(B);
	cout << "\nTong 2 so phuc: ";
	Sum.Xuat();

	Sub = A.Tru(B);
	cout << "\nHieu 2 so phuc: ";
	Sub.Xuat();

	Mul = A.Nhan(B);
	cout << "\nTich 2 so phuc: ";
	Mul.Xuat();

	Div = A.Chia(B);
	cout << "\nThuong 2 so phuc: ";
	Div.Xuat();

	return 0;
}