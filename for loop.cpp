#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int sum;
    sum=0;
    for(int counter=1;counter<=num;counter++){
        sum=sum+counter;
    }

    cout<<"the sum is- "<<sum<<endl;
}