#include <iostream>
#include <string>

using namespace std;

class ThiSinh {
private:
	int Ma;
	string HoTen, NgayThangNamSinh;
	float dToan, dVan, dAnh;
public:
	void Nhap();
	void Xuat();
	float TongDiem();
	ThiSinh();
	~ThiSinh();
	friend class TestCandidate;
};

class TestCandidate {
private:
	int n;
	ThiSinh DanhSach[100];
public:
	void NhapDS();
	void XuatDS();
	TestCandidate();
	~TestCandidate();
};

void ThiSinh::Nhap() {
	cout << "Ma thi sinh: ";
	cin >> Ma;

	cout << "Ho ten: ";
	cin.ignore();
	getline(cin, HoTen);

	cout << "Ngay thang nam sinh:";
	rewind(stdin);
	getline(cin, NgayThangNamSinh);

	cout << "Diem toan: ";
	cin >> dToan;

	cout << "Diem van: ";
	cin >> dVan;

	cout << "Diem anh: ";
	cin >> dAnh;
}

void ThiSinh::Xuat() {
	cout << "Ma thi sinh: " << Ma;
	cout << "\nHo Ten: " << HoTen;
	cout << "\nNgay thang nam sinh:" << NgayThangNamSinh;
	cout << "\nDiem toan: " << dToan;
	cout << "\nDiem van: " << dVan;
	cout << "\nDiem anh: " << dAnh << endl;
}

float ThiSinh::TongDiem() {
	return dAnh + dToan + dVan;
}

ThiSinh::ThiSinh(){}
ThiSinh::~ThiSinh(){}

void TestCandidate::NhapDS() {
	cout << "\nNhap so luong thi sinh: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "\nThi sinh thu: " << i + 1 << endl;
		DanhSach[i].Nhap();
	}
}

void TestCandidate::XuatDS() {
	for (int i = 0; i < n; i++)
	{
		if(DanhSach[i].TongDiem() > 15)
			DanhSach[i].Xuat();
	}
}

TestCandidate::TestCandidate(){}
TestCandidate::~TestCandidate(){}

int main() {
	TestCandidate x;
	
	x.NhapDS();
	
	cout << "\nDanh sach thi sinh co tong diem lon hon 15 \n";
	x.XuatDS();

	return 0;
}