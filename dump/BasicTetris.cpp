#include<iostream>
using namespace std;
#define ukuran 5

void InputTetris(int Tetris[ukuran][ukuran]){
    for(int i = 0; i < ukuran; i ++){
        for(int k = 0; k < ukuran; k ++){
            scanf("%d",&Tetris[i][k]);
        }
    }

}

int HapusBarisSama(int Tetris[ukuran][ukuran]){
    int elemenSama,BarisTerakhirHilang = 0;

    for(int baris = 0; baris < ukuran; baris ++){
        elemenSama = 0;

        for(int kolom = 1; kolom < ukuran; kolom ++){
            if(Tetris[ukuran][ukuran] != Tetris[baris][0]){
                elemenSama = 0;
                break;

            }
        }

        if(elemenSama){
            for(int kolom = 0; kolom < ukuran;kolom ++){
                Tetris[baris][kolom] = 0;
            }
            BarisTerakhirHilang = baris;

        }
    }
    return BarisTerakhirHilang;
}