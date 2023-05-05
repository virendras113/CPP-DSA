#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool flag=0;

    int sqnum;
    sqnum=sqrt(n);

    for(int i=2;i<sqnum;i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"Prime"<<endl;
    }

    return 0;
}