#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string name;
    getline(cin, name);

    stringstream ss(name);
    vector<string> words;
    string word;
    
    // Đọc từng từ từ chuỗi và lưu vào vector
    while (ss >> word) {
        words.push_back(word);
    }

    // In ngược từng từ trong vector
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }

    return 0;
}
