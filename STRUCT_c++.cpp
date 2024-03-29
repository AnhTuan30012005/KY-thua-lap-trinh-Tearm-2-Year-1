#include <bits/stdc++.h>
using namespace std;

struct Date
{
    int ngay; int thang ; int nam;
};


struct NHANVIEN
{

    string hten;
    string manv;
    Date ngaysinh;
};

int main()
{
    NHANVIEN nv, *pp, a[10] ;
    int n ;
    // cout << "Nhập mã nhân viên: ";
    // getline( cin , nv.manv);
    // cout << endl << "Họ tên mã nhân viên: ";
    // getline( cin , nv.hten);
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {   
        fflush(stdin);
        cout << "Ma nhân viên thứ " << i + 1 << ": ";
        getline(cin, a[i].manv);
        cout << "Nhập họ tên nhân viên thứ: " << i + 1 << ": ";
        getline(cin, a[i].hten);
        cout <<"Ngày: "; cin >> a[i].ngaysinh.ngay;
        cout <<"Tháng: "; cin >> a[i].ngaysinh.thang;
        cout <<"Năm: "; cin >> a[i].ngaysinh.nam;
    }
    // sizeof()
    // pp = &nv;
    // cout << "Thông tin nhân viên vừa được nhập là: ";
    // cout << pp->manv <<" , "<<pp->hten;
    for (int i = 0; i < n; i++)
    {
        cout <<i+1<< ".Thông tin nhân viên thứ: "<< i+1 << ":" << endl;  ;
        cout <<"Mã sinh viên: "<< a[i].manv << " \nHọ tên sinh viên: " << a[i].hten << endl;
        cout << "Ngày sinh: " << a[i].ngaysinh.ngay <<"/"<< a[i].ngaysinh.thang <<"/"<<a[i].ngaysinh.nam;
        cout << endl;
    }
    

    return 0;
}