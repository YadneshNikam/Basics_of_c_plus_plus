#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    if(num1 >= num2 && num1 >= num3) {
        cout << "The greatest number is: " << num1 << endl;
    } else if(num2 >= num1 && num2 >= num3) {
        cout << "The greatest number is: " << num2 << endl;
    } else {
        cout << "The greatest number is: " << num3 << endl;
    }
}/*Enter three integers: 10 20 30
The greatest number is: 30*/