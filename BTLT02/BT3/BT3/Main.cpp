#include <iostream>
#include<string>

using namespace std;

struct NhanVien {
	string MaNV, HoTen, PhongBan;
	int Luong, Thuong, ThucLanh;
};

void Nhap(NhanVien& nv) {
	rewind(stdin);
	cout << "MaNV: ";
	getline(cin, nv.MaNV);

	rewind(stdin);
	cout << "Ho ten: ";
	getline(cin, nv.HoTen);

	rewind(stdin);
	cout << "Phong ban: ";
	getline(cin, nv.PhongBan);

	cout << "Luong co ban: ";
	cin >> nv.Luong;

	cout << "Thuong: ";
	cin >> nv.Thuong;
}
int ThucLanh(NhanVien& nv) {
	nv.ThucLanh = nv.Luong + nv.Thuong;

	return nv.ThucLanh;
}
int TongThucLanh(NhanVien nv[], int n) {
	int Sum = 0;

	for (int i = 0; i < n; i++)
		Sum += ThucLanh(nv[i]);

	return Sum;
}

void Xuat(NhanVien& nv) {
	cout << "\nMaNV: " << nv.MaNV;
	cout << "\nHoTen: " << nv.HoTen;
	cout << "\nPhong ban: " << nv.PhongBan;
	cout << "\nLuong co ban: " << nv.Luong;
	cout << "\nThuong: " << nv.Thuong << endl;
}

void DSNVCoLuongCoBanThapNhat(NhanVien nv[], int n) {
	int min = nv[0].Luong;

	for (int i = 1; i < n; i++) {
		if (min > nv[i].Luong)
			min = nv[i].Luong;
	}

	for (int i = 0; i < n; i++) {
		if (nv[i].Luong == min)
			Xuat(nv[i]);
	}

}

int DemSLNhanVien(NhanVien nv[], int n) {
	int dem = 0;

	for (int i = 0; i < n; i++) {
		if (nv[i].Thuong >= 1200000)
			dem++;
	}

	return dem;
}

void HoanVi(NhanVien& a, NhanVien& b)
{
	NhanVien temp = a;
	a = b;
	b = temp;

}

void DSNVTheoPhongBan(NhanVien nv[], int n){
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nv[i].PhongBan > nv[j].PhongBan)
				HoanVi(nv[i], nv[j]);
			if (nv[i].PhongBan == nv[j].PhongBan)
				if (nv[i].MaNV < nv[j].MaNV)
					HoanVi(nv[i], nv[j]);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << "\nNhan vien thu:" << i + 1;
		Xuat(nv[i]);
	}
}

int main() {
	int n, tongThucLanh, dem;
	NhanVien nv[100];

	cout << "Nhap so luong nhan vien: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Thong tin cua nhan vien " << i + 1 << endl;
		Nhap(nv[i]);
	}
	
	tongThucLanh = TongThucLanh(nv, n);
	cout << "\nTong thuc lanh cua tat ca nhan vien trong thang: " << tongThucLanh << endl;
	
	DSNVCoLuongCoBanThapNhat(nv, n);
	
	dem = DemSLNhanVien(nv, n);
	cout << "\nSo luong nhan vien co muc thuong >= 1200000: " << dem;
	
	cout << "\nDanh sach nhan vien theo phong ban: ";
	DSNVTheoPhongBan(nv, n);

	return 0;
}