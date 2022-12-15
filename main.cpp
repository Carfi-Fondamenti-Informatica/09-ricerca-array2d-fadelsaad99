#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char arr1[20];
    char arr2[10][20];
    int posizione=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            arr1[j] = ' ';
            arr2[i][j] = ' ';
        }
    }
    for(int j=0; j<10; j++){
        cin>>arr2[j];
    }
    cin>>arr1;
    if(funzione(arr2, arr1, posizione)==1){
        cout << posizione << endl;
    }else{
        cout << "non presente" << endl;
    }
    return 0;
}
