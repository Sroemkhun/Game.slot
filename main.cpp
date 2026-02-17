#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int money = 100;
    int bet;

    cout << "===== SLOT GAME =====\n";

    while (money > 0) {
        cout << "\nMoney: " << money << endl;
        cout << "Enter bet (0 to quit): ";
        cin >> bet;

        if (bet == 0) break;

        if (bet > money) {
            cout << "Not enough money!\n";
            continue;
        }

        int s1 = rand() % 3;
        int s2 = rand() % 3;
        int s3 = rand() % 3;

        cout << s1 << " | " << s2 << " | " << s3 << endl;

        if (s1 == s2 && s2 == s3) {
            cout << "JACKPOT!\n";
            money += bet * 2;
        } else {
            cout << "Lose!\n";
            money -= bet;
        }
    }

    cout << "Game Over\n";
    return 0;
}
