#include <bits/stdc++.h>
using namespace std;
#include "Nhanvien.h"
#include "Nhanviensx.h"
#include "Nhanvienvp.h"
int main() {

    int sx,vp;
    cout<<"So nhan vien san xuat:"<<endl;
    cin>>sx;
    cout<<"So nhan vien san vp:"<<endl;
    cin>>vp;
    Nhanviensx nvsx[sx];
    Nhanvienvp nvvp[vp];
    vector<Nhanvien> tong;
    long long total=0;
    cout<<"Nhap nhan vien san xuat:"<<endl;
    for (int i=0;i<sx;i++) {
        cout<<"Nhan vien thu "<<i+1<<endl;
        nvsx[i].nhap();
        nvsx[i].tinhluong();
        tong.push_back(nvsx[i]);
        total+=nvsx[i].getLuong();
    }
    cout<<"Nhap nhan vien van phong:"<<endl;
    for (int i=0;i<vp;i++) {
        cout<<"Nhan vien thu "<<i+1<<endl;
        nvvp[i].nhap();
        nvvp[i].tinhluong();
        tong.push_back(nvvp[i]);
        total+=nvvp[i].getLuong();
    }
    cout<<"In thong tin nv san xuat:"<<endl;
    for (int i=0;i<sx;i++) {
        cout<<"Nhan vien thu "<<i+1<<endl;
        nvsx[i].xuat();
    }
    cout<<"In thong tin nv van phong:"<<endl;
    for (int i=0;i<vp;i++) {
        cout<<"Nhan vien thu "<<i+1<<endl;
        nvvp[i].xuat();
    }
    cout<<"tong tien luong cty phai tra: "<<total<<endl;
    int lonnhat=tong[0].getLuong(),nhonhat=tong[0].getLuong();
    for (int i=1;i<tong.size();i++) {
        if (lonnhat<tong[i].getLuong()) {
            lonnhat=tong[i].getLuong();
        }
        if (nhonhat>tong[i].getLuong()) {
            nhonhat=tong[i].getLuong();
        }
    }
    cout<<"Nhan vien co luong cao nhat:"<<lonnhat<<endl;
    cout<<"Nhan vien co luon thap nhat:"<<nhonhat<<endl;
    for (int i = 0; i < tong.size() - 1; i++) {
        for (int j = i + 1; j < tong.size(); j++) {
            if (tong[i].getLuong() < tong[j].getLuong()) {
                Nhanvien temp = tong[i];
                tong[i] = tong[j];
                tong[j] = temp;
            }
        }
    }
    cout<<"Danh sach nhan vien luong giam dan:"<<endl;
    for (int i=0;i<tong.size();i++) {
        cout<<"Nhan vien thu "<<i+1<<endl;
        tong[i].xuat();
    }

}
