#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter Your Choice \n"<<"1. Year\n"<<"2.month\n"<<"3. Day\n";
    cin>>ch;
    switch(ch){
       case 1: cout<<"year : 2021\n";
            break;
       case 2: cout<<"Month : octuber\n";
            break;
       case 3: cout<<"Day : Wednesday\n";
            break;
       default : cout<<"try again with correct choice\n";
            break;
    }
    return 0;
}
