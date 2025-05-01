#include <iostream>
using namespace std;

int main (){
    int lampu [100];

    for (int i = 1; i <= 100; i ++){
        lampu[i] = false;
    }
    for(int i = 1; i <= 100; i ++){
        for(int k = 1; k <= 10; k ++){
            if (i % k == 0){
                lampu [i] = !lampu[i];
            }
        }
    }
    int total_lampu = 0;

    for (int i = 1; i <=100; i ++){
        if (lampu[i]){
            total_lampu ++;
        }
    }
    cout << total_lampu << endl;
}