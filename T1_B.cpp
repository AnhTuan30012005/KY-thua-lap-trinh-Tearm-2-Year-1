// số từ có trong chuỗi (cách nhau bằng ký tự trắng)
//lưu ý là các input đã được chuẩn hóa;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    int dem = 0;
    for( char c : name)
    {
        if(c == ' ') dem++;
    }

    cout << dem+1 ;
}