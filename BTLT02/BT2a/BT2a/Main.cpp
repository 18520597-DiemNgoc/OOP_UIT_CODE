#include <iostream>

using namespace std;

struct DMY {
	int day, month, year;
};

void Nhap(DMY& x, int& NgayTrongThang)
{
	cout << "Nhap ngay: ";
	cin >> x.day;
	cout << "Nhap thang: ";
	cin >> x.month;
	cout << "Nhap nam: ";
	cin >> x.year;

	switch (x.month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			NgayTrongThang = 31;
			break;
		case 4: case 6: case 9: case 11:
			NgayTrongThang = 30;
			break;
		case 2:
			if (x.year % 400 == 0 || (x.year % 4 == 0 && x.year % 100 != 0))
				NgayTrongThang = 29;
			else NgayTrongThang = 28;
			break;
		default: NgayTrongThang = 0;
	}

	if (NgayTrongThang == 0 || x.year < 1 || (NgayTrongThang != 0 && (x.day > NgayTrongThang || x.day < 1))) {
		cout << "Ngay thanh nam khong hop le, vui long nhap lai:" << '\n';
		Nhap(x, NgayTrongThang);
	}
}

void Xuat(DMY& dmy) {
	cout << "\nNgay ke tiep la: " << dmy.day << "/" << dmy.month << "/" << dmy.year << endl;
}

DMY NgayKeTiep(DMY& dmy, int n) {
	DMY kq;

	if (dmy.day < n) {
		kq.day = dmy.day + 1;
		kq.month = dmy.month;
		kq.year = dmy.year;
	}
	else {
		if (dmy.month != 12) {
			kq.day = 1;
			kq.month = dmy.month + 1;
			kq.year = dmy.year;
		}
		else {
			kq.day = 1;
			kq.month = 1;
			kq.year = dmy.year + 1;
		}
	}

	return kq;
}

int main() {
	DMY dmy, kq;
	int ngaytrongthang;

	Nhap(dmy, ngaytrongthang);
	kq = NgayKeTiep(dmy, ngaytrongthang);
	Xuat(kq);

	return 0;
}