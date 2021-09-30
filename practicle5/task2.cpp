#include<iostream>
#include <iomanip>
using namespace std;
void charfxn(){
    char ch='a';
    cout<<"charfxn() : "<<ch<<" "<<"size of var : "<<sizeof(ch)<<"// size of datatype : "<<sizeof(char)<<"// size of value"<<sizeof('a')<<"\n";
}
void boolfxn(){
    bool a=10>9;
    cout<<"boolfxn() : "<<a<<" "<<"size of var : "<<sizeof(a)<<"// size of datatype : "<<sizeof(bool)<<"// size of value"<<sizeof('1')<<"\n"<<endl;
}
void  shortfxn(){
    short a=2;
    cout<<"shortfxn() : "<<ch<<" "<<"size of var : "<<sizeof(ch)<<"// size of datatype : "<<sizeof(char)<<"// size of value"<<sizeof('a')<<"\n";
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
