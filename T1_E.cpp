// số từ dài nhất 
#include <bits/stdc++.h>
using namespace std;

void tu_dai(string & name)
{
    int dem = 0;
    stringstream ss(name);
    string word;
    string chu;
    while( ss >> word )
    {
        if(word.length() > dem)
        {
            dem = word.length();
            chu = word;
        }
    }

    cout << "Từ dài nhất là: "<<chu << "  "<< "Và có độ dài là: "<< dem <<endl;

}

int main()
{
    string name;
    getline(cin , name);

    tu_dai(name);

    return 0;
}
