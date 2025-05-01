#include <iostream>
using namespace std;

int main (){
    int N = 10;

    for (int i = 1; i <= N; i ++){
        for (int k = 1; k <= N; k +=1){

            if ( i == 1 || i == N|| k == 1|| k == N){
                cout << "*";
            }else {
                cout << "-";
            }
        }
        cout<< endl;
    }
}