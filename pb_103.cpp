//bài 103 trên coder
#include <bits/stdc++.h>
using namespace std;

string chuan(string &name)
{
    // xóa ký tự đầu
    int dau = 0;
    for (int  i = 0 ; i < name.length() ; i++)
    {
        if (name[i] == ' ')
            dau++;
        else{
            break;
        }
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
        if (name[i] == ' ')
        {
            name.erase(i, 1);
            i--;
        }
    }
    return name;
}


int main()
{
    //khai báo hai string
    string mot ; 
    getline( cin , mot);

    string hai ;
    getline( cin , hai);

    int max = 0;

    chuan( mot );
    chuan( hai );
    

    if( hai.length() >= mot.length() ){
        max = hai.length();
    }
    else {
        max = mot.length();
    }

    for( int i  = 0 ; i < max ; i ++ )
    {
        if( mot[i] != '\0') cout << mot[i];
        if( hai[i] != '\0') cout << hai[i];
    }

    return 0;
}