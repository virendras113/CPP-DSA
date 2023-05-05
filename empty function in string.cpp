#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1;

    s1 = "abcdef";

    s1.clear();

    if(s1.empty()){
        cout<<"the string is empty"<<endl;
    }else{
        cout<<"the string is not empty"<<endl;
    }
}