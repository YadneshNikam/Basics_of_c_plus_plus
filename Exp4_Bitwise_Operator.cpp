#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Bitwise AND: " << (a & b) << endl;
    cout << "Bitwise OR: " << (a | b) << endl;
    cout << "Bitwise XOR: " << (a ^ b) << endl;
    cout << "Bitwise NOT of first integer: " << (~a) << endl;
    cout << "Left shift first integer by 1: " << (a << 1) << endl;
    cout << "Right shift first integer by 1: " << (a >> 1) << endl;
    return 0;
}
/* Output:Enter two integers: 3 4
Bitwise AND: 0
Bitwise OR: 7
Bitwise XOR: 7
Bitwise NOT of first integer: -4
Left shift first integer by 1: 6
Right shift first integer by 1: 18 */