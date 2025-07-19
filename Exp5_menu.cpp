#include <iostream>
using namespace std;
int main() {
    int choice,biryani, pizza, pasta, salad;
        
    cout<< "Menu:" << endl;
    cout<<"1.Biryani"<<endl<<
          "2.Pizza"<<endl<<
          "3.Pasta"<<endl<<
          "4.Salad"<<endl;
    cout<<"Enter your choice (1-4): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You chose Biryani." << endl;
            cout << "1. Chicken Biryani" << endl;
            cout << "2. Mutton Biryani" << endl;
            cout << "3. Vegetable Biryani" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> biryani;
            switch (biryani) {
                case 1:
                    cout << "You chose Chicken Biryani." << endl;
                    break;
                case 2:
                    cout << "You chose Mutton Biryani." << endl;
                    break;
                case 3:
                    cout << "You chose Vegetable Biryani." << endl;
                    break;
                default:
                    cout << "Invalid choice for Biryani!" << endl;
            }
            break;
        case 2:
            cout << "You chose Pizza." << endl;
            cout << "1. Margherita" << endl;
            cout << "2. Pepperoni" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> pizza;
            switch (pizza){
                case 1:
                    cout << "You chose Margherita Pizza." << endl;
                    break;
                case 2:
                    cout << "You chose Pepperoni Pizza." << endl;
                    break;
                default:
                    cout << "Invalid choice for Pizza!" << endl;
            }
        
        case 3:
            cout << "You chose Pasta." << endl;
            cout << "1. Spaghetti" << endl;
            cout << "2. Penne" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> pasta;
            switch (pasta) {
                case 1:
                    cout << "You chose Spaghetti." << endl;
                    break;
                case 2:
                    cout << "You chose Penne." << endl;
                    break;
                default:
                    cout << "Invalid choice for Pasta!" << endl;
            }
            break;
        case 4:
            cout << "You chose Salad." << endl;
            cout << "1. Caesar Salad" << endl;
            cout << "2. Greek Salad" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> salad;
            switch (salad) {
                case 1:
                    cout << "You chose Caesar Salad." << endl;
                    break;
                case 2:
                    cout << "You chose Greek Salad." << endl;
                    break;
                default:
                    cout << "Invalid choice for Salad!" << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}/*Menu:
1.Biryani
2.Pizza
3.Pasta
4.Salad
Enter your choice (1-4): 1
You chose Biryani.
1. Chicken Biryani
2. Mutton Biryani
3. Vegetable Biryani
Enter your choice (1-3): 2
You chose Mutton Biryani.*/
