/*Given an integer n. You need to recreate the pattern given below for any value of N.
 Let's say for N = 5, the pattern should look like as below:

    *
   ***
  *****
 *******
*********
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}