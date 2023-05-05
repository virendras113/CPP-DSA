#include <iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinmaze(int** arr, int x, int y, int n,int** solArr){
    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
}