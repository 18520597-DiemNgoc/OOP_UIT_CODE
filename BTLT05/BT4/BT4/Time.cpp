#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(){}

Time::Time(int h, int m, int s) {
	h = h;
	m = m;
	s = s;
}

Time::~Time(){}

int Time::CheckTime() {
	if (h < 0 || h > 23 || m < 0 || m > 60 || s < 0 || s > 60)
		return 1;
	else return 0;
}

void Time::Nhap() {
	cin >> h >> m >> s;
	if (CheckTime()) {
		cout << "/nThoi gian khong hop le. Vui long nhap lai...";
		Nhap();
	}
}

void Time::Xuat() {
	cout << h << "h" << m << "m" << s << "s";
}

void Time::setH(int h) {
	h = h;
}

void Time::setM(int m) {
	m = m;
}

void Time::setS(int s) {
	s = s;
}

void Time::setHMS(int h, int m, int s) {
	h = h;
	m = m;
	s = s;
}

int Time::getH() {
	return h;
}

int Time::getM() {
	return m;
}

int Time::getS() {
	return s;
}

Time Time::LastTime(Time lt) {
	Time kq;
	int gio, phut, giay;

	gio = h - lt.h;
	phut = m - lt.m;
	giay = s - lt.s;

	if (giay < 0) {
		giay += 60;
		phut -= 1;
	} 

	if (phut < 0) {
		phut += 60;
		gio -= 1;
	}

	if (gio < 0) {
		gio += 23;
	}

	kq.h = gio;
	kq.m = phut;
	kq.s = giay;

	return kq;
}

Time Time::NextTime(Time nt) {
	Time kq;
	int gio, phut, giay;

	gio = h + nt.h;
	phut = m + nt.m;
	giay = s + nt.s;

	if (giay > 59) {
		giay -= 60;
		phut += 1;
	}

	if (phut > 59) {
		phut -= 60;
		gio += 1;
	}

	if (gio > 23) {
		gio -= 23;
	}

	kq.h = gio;
	kq.m = phut;
	kq.s = giay;

	return kq;
}

int Time::DoiGioPhutGiay() {
	return h * 3600 + m * 60 + s;
}