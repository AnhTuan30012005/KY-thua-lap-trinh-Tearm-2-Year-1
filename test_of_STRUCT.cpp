// Bài tập của cô Đoàn Thị Hồng Phước
#include <bits/stdc++.h>
using namespace std;

struct HOCSINH
{
    string hoten;
    string masv;
    double diemCC;
    double KT_1;
    double KT_2;
    double DIEM_QT;
};
    char diemChu(double Diem_QT) {
    if (Diem_QT >= 8.5)
        return 'A';
    else if (Diem_QT >= 7.0)
        return 'B';
    else if (Diem_QT >= 5.5)
        return 'C';
    else if (Diem_QT >= 4.0)
        return 'D';
    else
        return 'F';
}

int main()
{   
    int n ; cin >> n;
    
    HOCSINH hs , a[n];
    cin.ignore(); // Đảm bảo có thể nhập được tất cả

    set<string> maSinhVien;


    for( int i = 0 ; i < n ; i++)
    {
        cout<<"+ Học sinh thứ "<<i+1 <<" :" <<endl;
        bool validInput = false;
        do {
            cout <<"Nhập mã sinh viên: "; 
            getline( cin , a[i].masv);
            if (maSinhVien.find(a[i].masv) != maSinhVien.end()) {
                cout << "Mã sinh viên đã tồn tại. Vui lòng nhập lại.\n";
            } else {
                maSinhVien.insert(a[i].masv);
                validInput = true;
            }
        } while (!validInput);
    
        cout <<"Nhập họ tên: "; getline( cin , a[i].hoten);
        cout <<"Nhập điểm chuyên cần: "; cin >> a[i].diemCC;
        cout <<"Nhập điểm kiểm tra 1: "; cin >> a[i].KT_1;
        cout <<"Nhập điểm kiểm tra 2: "; cin >> a[i].KT_2;

        cin.ignore();

        a[i].DIEM_QT = (a[i].diemCC * 15 / 100 + a[i].KT_1 * 15 / 100 + a[i].KT_2 * 20 / 100) * 100 / 50;
    }

    cout << endl;
    int dem_A = 0;

    for( int i = 0 ; i < n ; i ++)
    {   cout << fixed << setprecision(1);
        cout << i+1 << ".Học sinh thứ " << i + 1 << ":\n";
        cout << "Họ tên: " << a[i].hoten << endl;
        cout << "Mã sinh viên: " << a[i].masv << endl;
        cout << "Điểm chuyên cần: " << a[i].diemCC << endl;
        cout << "Điểm kiểm tra 1: " << a[i].KT_1 << endl;
        cout << "Điểm kiểm tra 2: " << a[i].KT_2 << endl;
        cout << "Điểm quá trình: " << a[i].DIEM_QT << endl;

        if (diemChu(a[i].DIEM_QT) == 'A')
            dem_A++;
    }

    cout << "\nSo luong sinh vien dat diem A: " << dem_A << endl;
    
    return 0;
}
