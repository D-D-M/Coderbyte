#include <iostream>
#include <string>
#include <algorithm>

// File created by David Dick Meyer

using namespace std;

bool checkAnagram(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return (a == b); // Doesn't matter if the strings change within this function because we pass by value.
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: ./progam_name string1 string2" << endl;
        return -1;
    }
    string a = argv[1];
    string b = argv[2];
    bool is_anagram = checkAnagram(a, b);
    cout << is_anagram << endl;
    return 0;
}
