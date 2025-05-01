#include <iostream>
using namespace std;

int main(){
    int N = 11;

    for (int i = 1; i <= N; i ++ ){
        for(int k = 1; k <= N; k += 1){
            if (k == i || k == N - i + 1){
                cout << "*";
            }else {
                cout << "."; 
            }
        }
        
        cout << endl;
    }
}