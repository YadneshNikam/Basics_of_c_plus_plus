#include <iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") is in Quadrant I." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") is in Quadrant II." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") is in Quadrant III." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") is in Quadrant IV." << endl;
    } else if (x == 0 && y != 0) {
        cout << "The point (" << x << ", " << y << ") is on the Y-axis." << endl;
    } else if (y == 0 && x != 0) {
        cout << "The point (" << x << ", " << y << ") is on the X-axis." << endl;
    } else {
        cout << "The point is at the origin (0, 0)." << endl;
    }
        
}
/*Enter the x coordinate: 20
Enter the y coordinate: 30'
The point (20, 30) is in Quadrant I.
Enter the x coordinate: -1
Enter the y coordinate: -2
The point (-1, -2) is in Quadrant III
Enter the x coordinate: 1
Enter the y coordinate: -4
The point (1, -4) is in Quadrant IV.
Enter the x coordinate: -1
Enter the y coordinate: 3
The point (-1, 3) is in Quadrant II.
Enter the x coordinate: 0
Enter the y coordinate: 1
The point (0, 1) is on the Y-axis.
Enter the x coordinate: 1
Enter the y coordinate: 0
The point (1, 0) is on the X-axis
Enter the x coordinate: 0
Enter the y coordinate: 0
The point is at the origin (0, 0).
*/