#include <bits/stdc++.h>
using namespace std;
int main()
{
    string mot ;
    string hai ;

    string key = "";

    getline( cin , mot);
    getline( cin , hai);

    int i = 0;
    int j = 0;
    while ( i < mot.length() || j < hai.length())
    {
        if( i < mot.length() ) {
            key += mot[i];
        }
        if( j < hai.length() ) {
            key += hai[i];
        }

        i++;
        j++;
    }
    
    cout  << key << endl; 
    
    return 0;    
}