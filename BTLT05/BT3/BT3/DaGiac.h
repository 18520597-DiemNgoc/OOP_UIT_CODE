#pragma once
#include "Diem.h"

class DaGiac {
private:
    Diem* ds;
public:
    DaGiac();
    DaGiac(Diem[], int n);
    ~DaGiac(void);
    void Nhap(int n);
    void Xuat(int n);
    void TinhTien(Diem v, int n);
    void Quay(float rad, int n);
    void ZoomInOut(float k, int n);
};
