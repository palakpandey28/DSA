#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    cout<<"enter the elemnt of an array";

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Hash array
    int hash[13] = {0};

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q > 0) {
        int number;
        cout << "Enter your query number: ";
        cin >> number;

        cout << "Query for " << number << " is = " << hash[number] << endl;

        q--;
    }

    return 0;
}