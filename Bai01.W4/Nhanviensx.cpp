//
// Created by Lenovo on 15/03/2026.
//
#include <bits/stdc++.h>

#include "Nhanvienvp.h"
using namespace std;
#include "Nhanviensx.h"
void Nhanviensx :: nhap() {
    cin.ignore();
    Nhanvien::nhap();
    cout<<"Luong co ban:";
    cin>>luongcoban;
    cout<<"so san pham:";
    cin>>sosanpham;
}
void Nhanviensx::tinhluong() {
    luong=luongcoban + sosanpham*5000;
}
