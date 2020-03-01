#include <iostream>
#include "Game.cpp"

using namespace std;


int main() {
    system("clear");
    char array[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int counter = 0;
    int choice;
    //Game::drawboard(array);
    while (true) {

        //Computer's Turn
        while (true) {
            srand(time(nullptr));
            int num = rand() % 9;
            if (array[num] != 'o' && array[num] != 'x') {
                array[num] = 'x';
                counter++;
                break;
            }
        }
        system("clear");
        Game::drawboard(array);   //check win cases
        if (Game::checkwin(array, counter)) {
            return 0;
        }
        a:  cout << "\n\nYour turn.\nPlease select an option : ";
        cin >> choice;               //players choice
        if (choice > 0 && choice < 10) {
            if (array[choice - 1] != 'x' && array[choice - 1] != 'o') {
                array[choice - 1] = 'o';
                counter++;
            } else {
                cout << "\nInvalid option,try again\n";
                goto a;
            }
        } else {
            cout << "\nInvalid option,try again\n";
            goto a;}
        system("clear");
        Game::drawboard(array);
        if (Game::checkwin(array, counter)) {
            return 0;
        }

    }
}

