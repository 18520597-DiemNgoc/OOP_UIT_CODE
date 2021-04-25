#include <iostream>
#include <string>

using namespace std;

struct HocSinh {
	string HoTen;
	float DiemVan, DiemToan;
};

void Nhap(HocSinh& HS) {
	fflush(stdin);
	cout << "\nHo ten: ";
	getline(cin, HS.HoTen);

	cout << "\nDiem toan: ";
	cin >> HS.DiemToan;

	cout << "\nDiem van: ";
	cin >> HS.DiemVan;
}

void Xuat(HocSinh& HS) {
	cout << "\nHo ten: " << HS.HoTen;
	cout << "\nDiem van: " << HS.DiemVan;
	cout << "\nDiem toan: " << HS.DiemToan;
	cout << "\nDiem trung binh: " << (HS.DiemToan + HS.DiemVan) / 2 << endl;
}

int main() {
	HocSinh hs;

	Nhap(hs);
	Xuat(hs);

	return 0;
}