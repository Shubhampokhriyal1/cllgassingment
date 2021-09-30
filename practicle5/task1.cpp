#include<iostream>
#include <iomanip>
using namespace std;
void charfxn(){
    char ch='a';
    cout<<"charfxn() : "<<ch<<" "<<sizeof(ch)<<"\n";
}
void boolfxn(){
    bool a=10>9;
    cout<<"boolfxn() : "<<a<<" "<<sizeof(a)<<endl;
}
void  shortfxn(){
    short a=2;
    cout<<"shortfxn() : "<<a<<" "<<sizeof(a)<<endl;
}
void intfxn(){
    int a=89;
    cout<<"intfxn() : "<<a<<" "<<sizeof(a)<<endl;
}
void longfxn(){
    long s=67;
    cout<<"longfxn() : "<<s<<" "<<sizeof(s)<<endl;
}
void floatfxn(){
    float val =7.9123467f;
    cout<<"floatfxn() : "<< std::fixed<<setprecision(8)<<val<<" "<<sizeof(val)<<endl;
}
void doublefxn(){
    double val=1.123456789987654;
    cout<<"doublefxn() : "<< std::fixed<<setprecision(16)<<val<<" "<<sizeof(val)<<endl;
}
void longdoublefxn(){
    long double val=456.8732591347592;
    cout<<"longdoublefxn() : "<< std::fixed<<setprecision(17)<<val<<" "<<sizeof(val)<<endl;
}
void widecharfxn(){ 
    wchar_t a=L's';
    cout<<"Widecharfxn() : "<<a<<" "<<sizeof(a)<<endl;
}
int main(){
    charfxn();
    boolfxn();
    shortfxn();
    intfxn();
    longfxn();
    floatfxn();
    doublefxn();
    longdoublefxn();
    widecharfxn();
    return 0;
}
