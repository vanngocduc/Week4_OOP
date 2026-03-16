//
// Created by Lenovo on 15/03/2026.
//
#include <bits/stdc++.h>
#include"Nhanvien.h"
using namespace std;
#ifndef OOP_NMN_NHANVIENSX_H
#define OOP_NMN_NHANVIENSX_H


class Nhanviensx : public Nhanvien {
    private:
        int luongcoban;
        int sosanpham;
    public:
        void nhap();
        void tinhluong();
};


#endif //OOP_NMN_NHANVIENSX_H