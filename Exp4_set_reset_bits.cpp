#include <iostream>
using namespace std;
int main(){
    int i=43;
    int bit_to_be_set,bit_to_be_reset;
    int set,reset;
    cout<<"Enter the bit position to be set : ";
    cin>>bit_to_be_set;
    set = i | (1 << bit_to_be_set);
    cout<<"After setting the bit "<<bit_to_be_set<<" : "<<set<<endl;
    cout<<"Enter the bit position to be reset : ";
    cin>>bit_to_be_reset;
    reset = i & ~(1 << bit_to_be_reset);
    cout<<"After resetting the bit "<<bit_to_be_reset<<" : "<<reset<<endl;
    return 0;
}