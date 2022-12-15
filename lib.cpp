#include "lib.h"

bool funzione(char arr2[10][20], char arr1[20],int &posizione){
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            if(arr2[i][j]!=arr1[j]){
                j=20;
            }else{
                if(j==19){
                    posizione=i;
                    return true;
                }
            }
        }
    }
    return false;
}
