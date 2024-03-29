// in ra từ đầu tiên và từ cuối cùng của chuỗi cho trước
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin , name);
    string cuoi;

    cout << "Từ đầu tiên là: "; 
    for(char c : name)
    {
        cout << c;
        if(c == ' ') break;
    }
    cout  << endl << "Đây là từ cuối cùng: " ;
    for(int i = name.length() - 1 ; i >= 0 ; i-- )
    {
        if(isspace(name[i])) break;
        else cuoi += name[i];
    }
    reverse(cuoi.begin() , cuoi.end());
    cout << cuoi;
    return 0;
}