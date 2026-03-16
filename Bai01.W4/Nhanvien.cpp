//
// Created by Lenovo on 15/03/2026.
//
#include <bits/stdc++.h>
using namespace std;
#include "Nhanvien.h"
void Nhanvien::nhap() {
    cout<<"Ho ten:";
    getline(cin,hoten);
    cout<<"Ngay sinh:";
    cin>>ngaysinh;
}
int Nhanvien::getLuong() {
    return luong;
}
void Nhanvien::xuat() {
    cout<<hoten<<" "<<ngaysinh<<" "<<luong<<endl;
}
