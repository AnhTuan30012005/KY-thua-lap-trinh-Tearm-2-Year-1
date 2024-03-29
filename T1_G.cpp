// số từ khác nhau và tần suất xuất hiện của chúng 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline( cin , name);

    stringstream ss(name);
    string word;

    map <string , int > mp;

    while ( ss >> word )
    {
        mp[word]++ ; 
    }
    
   cout << "Số từ khác nhau: "<< mp.size() << endl;
   cout << "Tần suất:";

   for( pair< string , int > it : mp)
   {
    cout << it.first << ": " << it.second <<" ";
   }

    return 0;
}