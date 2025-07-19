#include <iostream>
using namespace std;
int main(){
    char i;
    cout << "Enter a character: ";
    cin >> i;
    if (i=='a' || i=='e' || i=='i' || i=='o' || i=='u') 
        {
        cout << "The character is a vowel." << endl;
    } else if((i >= 'a' && i <= 'z') ) {
        cout << "The character is a consonant." << endl;
    } else {
        cout << "The character is neither a vowel nor a consonant." << endl;
    }

}/*
Enter a character: a
The character is a vowel.
Enter a character: b
The character is a consonant.
*/