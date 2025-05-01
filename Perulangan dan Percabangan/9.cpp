#include <iostream>
using namespace std;

int main (){
    int N = 10;

    for (int i = 1; i <= N; i += 1){
        for (int k = 1; k <= N; k ++){
            if (i == 1 || i == N){
                cout << "*";
            }
            else if (k == i || k == N - i + 1){
                cout << "*";
            }
            else {
                cout << ".";
            }
            
        }
        cout << endl;
    }
}