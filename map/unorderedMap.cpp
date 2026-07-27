#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q != 0) {
        int a;
        cout << "Enter query: ";
        cin >> a;

        cout << mpp[a] << endl;

        q--;
    }

    return 0;
}