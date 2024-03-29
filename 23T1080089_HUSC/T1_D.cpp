//in hoa các từ đầu mỗi từ, còn lại in thường
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin , name);

    name[0] = toupper(name[0]);
    for(int i = 1 ; i < name.length() ; i++)
    {
        if(isspace(name[i]) && isalpha(name[i+1]))
        {
            name[ i+1 ] = toupper(name[i+1]);
        }
    }
    cout << name ;

    return 0;
}
