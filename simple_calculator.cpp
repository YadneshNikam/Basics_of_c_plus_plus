//Calculator
#include <iostream>
using namespace std;
int main(){
float num1,num2,division,multiplication,sum,sub;
cout<<"Enter the value of num1:";
cin>>num1;
cout<<"Enter the value of num2:";
cin>>num2;
sum=num1+num2;
sub=num1-num2;
multiplication=num1*num2;
division=num1/num2;
cout<<"sum="<<sum<<endl;
cout<<"sub="<<sub<<endl;
cout<<"multiplication="<<multiplication<<endl;
cout<<"division="<<division<<endl;
return 0;
}
/*Enter the value of num1:10
Enter the value of num2:20
sum=30
sub=-10
multiplication=200
division=0.5*/