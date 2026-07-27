/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's 
say for N = 5, the pattern should look like as below:

1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << num;
        }
        num++;
        cout << endl;
    }

    return 0;
}