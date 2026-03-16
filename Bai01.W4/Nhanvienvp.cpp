//
// Created by Lenovo on 15/03/2026.
//
#include <bits/stdc++.h>
using namespace std;
#include "Nhanvienvp.h"
void Nhanvienvp::nhap() {
    cin.ignore();
    Nhanvien::nhap();
    cout<<"Ngay lam viec:";
    cin>>ngaylamviec;
}
void Nhanvienvp :: tinhluong() {
    luong=ngaylamviec*100000;
}
