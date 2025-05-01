#include <iostream>
using namespace std;

int main (){
    int N = 10;

    for (int i = 1; i <= N; i ++){
        for (int k = 1; k <= i; k += 1)
        cout << "*";

        for (int j = 1; j <= N - i; j ++){
            cout << "-";
        }
        cout << endl;
    }
    
}