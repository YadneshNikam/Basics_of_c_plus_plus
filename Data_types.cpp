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

