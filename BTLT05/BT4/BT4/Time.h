#pragma once

class Time {
private:
	int h, m, s;
public:
	Time();
	Time(int h, int m, int s);
	~Time();
	int CheckTime();
	void Nhap();
	void Xuat();
	void setH(int h);
	void setM(int m);
	void setS(int S);
	void setHMS(int h, int m, int s);
	int getH();
	int getM();
	int getS();
	Time LastTime(Time ls);
	Time NextTime(Time nt);
	int DoiGioPhutGiay();
};