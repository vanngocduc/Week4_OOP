//
// Created by Lenovo on 15/03/2026.
//
#include <bits/stdc++.h>
using namespace std;
#ifndef OOP_NMN_NHANVIEN_H
#define OOP_NMN_NHANVIEN_H


class Nhanvien {
    protected:
        string hoten,ngaysinh;
        int luong;
    public:
        Nhanvien() {
            luong=0;
        }
        void nhap();
        void xuat();
        int getLuong();
};


#endif //OOP_NMN_NHANVIEN_H