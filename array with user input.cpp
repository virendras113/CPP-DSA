#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array1[n];

    for(int i=0;i<n;i++){
        cin>>array1[i];
    }

    for(int j=0;j<n;j++){
        cout<<array1[j]<<endl;
    }
}