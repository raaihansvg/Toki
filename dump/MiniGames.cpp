#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;


void printRules();
int getRandomNumber(int min, int max);
bool isValidInput(int input, int min, int max);
void playGame(int &score);

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int score = 0; 
    char playAgain;

    
    printRules();

    do {
        playGame(score); 
        cout << "\nSkor Anda: " << score << endl;
        cout << "Mau main lagi? (y/n): ";
        cin >> playAgain;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    } while (tolower(playAgain) == 'y');

    cout << "\nTerima kasih telah bermain! Skor akhir Anda: " << score << endl;
    return 0;
}


void printRules() {
    cout << "=========================\n";
    cout << "     Mini Game Tebak Angka     \n";
    cout << "=========================\n";
    cout << "Aturan: \n";
    cout << "1. Anda harus menebak angka antara 1 dan 100.\n";
    cout << "2. Anda punya 10 kesempatan setiap level.\n";
    cout << "3. Setiap tebakan yang benar meningkatkan skor Anda.\n";
    cout << "=========================\n\n";
}


int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}


bool isValidInput(int input, int min, int max) {
    return input >= min && input <= max;
}


void playGame(int &score) {
    int target = getRandomNumber(1, 100);
    int guess, attempts = 10;

    cout << "\nLevel Baru Dimulai!\n";
    cout << "Anda memiliki " << attempts << " kesempatan.\n";

    for (int i = 1; i <= attempts; ++i) {
        cout << "Tebakan ke-" << i << ": ";
        while (!(cin >> guess) || !isValidInput(guess, 1, 100)) {
            cout << "Input tidak valid! Masukkan angka antara 1-100: ";
            cin.clear(); // Clear error
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (guess == target) {
            cout << "Selamat! Anda menebak dengan benar.\n";
            score += 10; 
            return;
        } else if (guess < target) {
            cout << "Terlalu kecil! Coba lagi.\n";
        } else {
            cout << "Terlalu besar! Coba lagi.\n";
        }
    }

    cout << "Kesempatan habis! Angka yang benar adalah " << target << ".\n";
}

