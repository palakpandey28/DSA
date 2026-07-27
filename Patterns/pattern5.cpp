/*Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

12345
1234
123
12
1

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j < n - i; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}