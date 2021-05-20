#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	Time time, t, last, next;
	int giay;

	cout << "Nhap thoi gian hien tai: ";
	time.Nhap();

	cout << "\nKhoang thoi gian can tinh: ";
	t.Nhap();

	cout << "\nThoi gian vua nhap la: ";
	time.Xuat();

	last = time.LastTime(t);
	cout << "\nLast time: ";
	last.Xuat();
	if (time.getH() - t.getH() < 0)
		cout << "\nDay la thoi gian ngay hom truoc.";

	next = time.NextTime(t);
	cout << "\nNext time: ";
	next.Xuat();
	if (time.getH() + t.getH() > 23)
		cout << "\nDay la thoi gian ngay hom sau.";

	cout << "\nThoi gian tren bang ";
	giay = t.DoiGioPhutGiay();
	cout << giay << "s";

	return 0;
}
