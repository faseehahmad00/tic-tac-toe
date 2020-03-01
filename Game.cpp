#include<iostream>

using namespace std;


class Game {
public:
    static void drawboard(char a[]) {
        printf("  %c  |  %c  |  %c  \n---------------- \n  %c  |  %c  |  %c  \n---------------- \n  %c  |  %c  |  "
               "%c  \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);

    }

    static bool checkwin(char *a, int counter) {
        if (a[0] == 'o' && a[1] == 'o' && a[2] == 'o') {
            cout << "player 1 wins \n";
            return true;
        } else if (a[3] == 'o' && a[4] == 'o' && a[5] == 'o') {
            cout << "player 1 wins \n";
            return true;
        } else if (a[6] == 'o' && a[7] == 'o' && a[8] == 'o') {
            cout << "player 1 wins \n";
            return true;
        } else if (a[0] == 'o' && a[3] == 'o' && a[6] == 'o') {
            cout << "player 1 wins \n";
            return true;
        } else if (a[1] == 'o' && a[4] == 'o' && a[7] == 'o') {
            cout << "player 1 wins \n";
            return true;
        } else if (a[2] == 'o' && a[5] == 'o' && a[8] == 'o') {
            cout << "player 1 wins \n";
            return true;
        } else if (a[0] == 'o' && a[4] == 'o' && a[8] == 'o') {
            cout << "player 1 wins \n";
            return true;
        } else if (a[2] == 'o' && a[4] == 'o' && a[6] == 'o') {
            cout << "player 1 wins \n";
            return true;
        }
        // x cases
        if (a[0] == 'x' && a[1] == 'x' && a[2] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (a[3] == 'x' && a[4] == 'x' && a[5] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (a[6] == 'x' && a[7] == 'x' && a[8] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (a[0] == 'x' && a[3] == 'x' && a[6] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (a[1] == 'x' && a[4] == 'x' && a[7] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (a[2] == 'x' && a[5] == 'x' && a[8] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (a[0] == 'x' && a[4] == 'x' && a[8] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (a[2] == 'x' && a[4] == 'x' && a[6] == 'x') {
            cout << "Computer wins \n";
            return true;
        } else if (counter == 9) {
            cout << "GAME DRAW !\n";
            return true;
        }
        return false;
    }
};
