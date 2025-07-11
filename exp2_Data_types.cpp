//yadnesh nikam
//24070123134
#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a:";
    cin >> a;
    cout<<"integer ="<<a<<" and size of integer is "<<sizeof(a)<<" bytes"<<endl;
    
    float b=0.0;
    cout<<"enter the value of b:";
    cin>> b;
    cout<<"Float = "<<b<<" and size of float is "<<sizeof(b)<<" bytes"<<endl;

    string c;
    cout<<"enter the value of c:";
    cin>>c;
    cout<<"String = "<<c<<" and size of string is "<<sizeof(c)<<" bytes"<<endl;

    char d;
    cout<<"enter the value of d:";
    cin>>d;
    cout<<"Character = "<<d<<" and size of character is "<<sizeof(d)<<" bytes"<<endl;

    bool e;
    cout<<"enter the value of e (0 or 1):";
    cin>>e;
    cout<<"Boolean = "<<e<<" and size of boolean is "<<sizeof(e)<<" bytes"<<endl;

    double f;
    cout<<"enter the value of f:";
    cin>>f;
    cout<<"Double = "<<f<<" and size of double is "<<sizeof(f)<<" bytes"<<endl;

    long g;
    cout<<"enter the value of g:";
    cin>>g;
    cout<<"Long = "<<g<<" and size of long is "<<sizeof(g)<<" bytes"<<endl;

    long long h;
    cout<<"enter the value of h:";
    cin>>h;
    cout<<"Long Long = "<<h<<" and size of long long is "<<sizeof(h)<<" bytes"<<endl;

    short i;
    cout<<"enter the value of i:";
    cin>>i;
    cout<<"Short = "<<i<<" and size of short is "<<sizeof(i)<<" bytes"<<endl;

}
/*integer =10 and size of integer is 4 bytes
enter the value of b:10
Float = 10 and size of float is 4 bytes
enter the value of c:10
String = 10 and size of string is 24 bytes
enter the value of d:10
Character = 1 and size of character is 1 bytes
enter the value of e (0 or 1):Boolean = 0 and size of boolean is 1 bytes
enter the value of f:29
Double = 29 and size of double is 8 bytes
enter the value of g:19
Long = 19 and size of long is 4 bytes
enter the value of h:29
Long Long = 29 and size of long long is 8 bytes
enter the value of i:22222
Short = 22222 and size of short is 2 bytes*/

