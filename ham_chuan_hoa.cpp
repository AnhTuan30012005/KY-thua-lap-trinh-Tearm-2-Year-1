#include <bits/stdc++.h>
using namespace std;

string chuan(string &name)
{
    // xóa ký tự đầu
    int dau = 0;
    for (char &c : name)
    {
        if (c == ' ')
            dau++;
        if (isalpha(c))
            break;
    }
    name.erase(0, dau);

    // xóa ký tự cuối
    int cuoi = 0;
    for (int i = name.length() - 1; i >= 0; i--)
    {
        if (name[i] == ' ')
            cuoi++;
        else
            break;
    }
    name.erase(name.length() - cuoi, cuoi);

    // xóa ký tự giữa
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == ' ' && name[i - 1] == ' ')
        {
            name.erase(i, 1);
            i--;
        }
    }
    return name;
}

int main()
{
    string ten;
    getline(cin , ten);

    chuan(ten);
    cout << "'" << ten << "'" << endl;
    return 0;
}