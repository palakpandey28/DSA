/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's 
say for N = 5, the pattern should look like as below:

1
12
123
1234
12345
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j < i + 1; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}