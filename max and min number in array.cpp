#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array1[n];

    for(int i=0;i<n;i++){
        cin>>array1[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for(int i=0;i<n;i++){
        if(array1[i]>maxno){ 
            maxno=array1[i];
        }
        if(array1[i]<minno){
            minno=array1[i];
        }
    }

    cout<<maxno<<endl;
    cout<<minno<<endl;

    return 0;
}