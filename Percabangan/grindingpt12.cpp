#include <iostream>
#include <string>
using namespace std;

int main (){
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;

    string terbesar,terkecil;

    if (A > B && A > C){
        terbesar = "A";
        if (B < C){
            terkecil = "B";
        }else {
            terkecil = "C";
        }

    }
    else if (B > A && B > C){
        terbesar = "B";
        if (A < C){
            terkecil = "A";
        }else {
            terkecil = "C";
        }
    }
    else if (C > A && C > B){
        terbesar = "C";
        if (A < B){
            terkecil = "A";
        }else{
            terkecil = "B";
        }
    }
    cout << "Nilai terbesar adalah: " << terbesar << endl;
    cout << "Nilai terkecil adalah: " << terkecil << endl;
}