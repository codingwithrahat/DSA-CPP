#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "apple";

    string* p = &s;        //pointer store memory address
    // & give memory addr of a variable


    cout<< s <<endl; //print apple
    
    cout<< &s <<endl; //print memory adress of apple (0x6d...)
    
    cout<< p <<endl; //print memory adress of apple (0x6d...)

    cout<< *p <<endl; //print apple (value of the varibale that pointed by p)
}
