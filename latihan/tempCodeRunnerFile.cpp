#include<iostream>
using namespace std;

void kali_dua(int &n){
    n *= 2;
}

int main(){
    int a = 10;
    kali_dua(a);
    cout << a << endl;
}