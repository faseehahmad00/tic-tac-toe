#include <iostream>
#include "Game.cpp"

using namespace std;


int main() {
    char array[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int counter = 0;
    char choice;
    Game::drawboard(array);
    a:
    cout << "\n\nPlease select an option : ";
    cin >> choice;
    for (int i = 0; i <= 9; i++) {
        if (choice == array[i]) {
            array[i] = 'o';
            counter++;
        }
    }
    if (Game::checkwin(array, counter)) { return 0; }
    //COMPUTERS TURN
    for (int i = 8; i >= 0; i--) {
        if (array[i] != 'o' && array[i] != 'x') {
            array[i] = 'x';
            counter++;
            break;
        }
    }
    Game::drawboard(array);
    if (Game::checkwin(array, counter)) { return 0; }
    else { goto a; }
}
