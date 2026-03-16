//
// Created by Lenovo on 15/03/2026.
//
#include <bits/stdc++.h>
using namespace std;
#include "Nhanvien.h"
#ifndef OOP_NMN_NHANVIENVP_H
#define OOP_NMN_NHANVIENVP_H


class Nhanvienvp :public Nhanvien{
    private:
        float ngaylamviec;
    public:
        void nhap();
        void tinhluong();
};


#endif //OOP_NMN_NHANVIENVP_H