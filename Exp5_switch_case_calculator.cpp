#include <iostream>
using namespace std;
int main(){
    int choice, num1, num2;
    cout << "Simple Calculator using Switch Case" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    
    cout << "Enter your choice (1-4): ";
    cin >> choice;


    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result: " <<(num1) / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    
    return 0;
}/*Simple Calculator using Switch Case
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1-4): 1
Enter two numbers: 10 20
Result: 30*/