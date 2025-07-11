#include <iostream>
using namespace std;
int main() {
    int Math, Edc, Dcld, signals_and_systems, Network_theory;
    cout << "Enter marks for Math: ";
    cin >> Math;
    cout << "Enter marks for Edc: ";
    cin >> Edc;
    cout << "Enter marks for Dcld: ";
    cin >> Dcld;
    cout << "Enter marks for Signals and Systems: ";
    cin >> signals_and_systems;
    cout << "Enter marks for Network Theory: ";
    cin >> Network_theory;
    int total = Math + Edc + Dcld + signals_and_systems + Network_theory;
    float percentage = (total / 500.0) * 100;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    if (percentage >= 90){
        cout << "Grade: o" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}
/*Enter marks for Math: 90
Enter marks for Edc: 68
Enter marks for Dcld: 98
Enter marks for Signals and Systems: 76
Enter marks for Network Theory: 89
Total Marks: 421
Percentage: 84.2%
Grade: A*/
