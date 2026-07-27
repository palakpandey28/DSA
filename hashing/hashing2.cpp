#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    int hash[26] = {0};

    

    // Store frequency of each character
    for (int i = 0; i < s.length(); i++) {
        hash[s[i] - 'a']++;
    }

    int n;
    cout << "Enter the number of queries: ";
    cin >> n;

    while (n != 0) {
        char q;
        cout << "Enter the character for query: ";
        cin >> q;

        cout << "Answer = " << hash[q - 'a'] << endl;

        n--;
    }

    return 0;
}