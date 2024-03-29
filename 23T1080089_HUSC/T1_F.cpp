//đảo ngược các từ  trong chuỗi
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


void nguoc(string &name)
{
    stringstream ss(name);
    string word;
    vector<string> chu;

    while ( ss >> word ) 
    {
        chu.push_back(word);
    }

    for(int i = chu.size() -1 ; i >= 0 ; i--)
    {
        cout << chu[i] << " ";
    }
}

int main()
{
    string name;
    getline(cin , name);
    
    chuan(name);

    nguoc(name);

    return 0;
}