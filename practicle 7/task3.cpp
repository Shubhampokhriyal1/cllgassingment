#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arrNew[3][3];
    for(int i=0;i<3;i++){
        
            for(int j=0;j<3;j++){
                arrNew[2-i][2-j]=arr[i][j];
            }
            
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arrNew[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
