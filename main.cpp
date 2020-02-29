#include <iostream>
#include "Game.cpp"
using namespace std;


int main() {
    char array[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char choice;
    Game::drawboard(array);
   a: cout << "\n\nenter 1st player  option";
    cin >> choice;
    for (int i = 0; i <= 9; i++) {
        if (choice == array[i]) {
            array[i] = 'o';
        }
    }
    Game::drawboard(array);
    if(Game::checkwin(array))
    {return 0;}
    cout << "\n\nenter 2nd  option";
    cin >> choice;
    for (int i = 0; i <= 9; i++) {
        if (choice == array[i]) {
            array[i] = 'x';
        }
    }
    Game::drawboard(array);
    if(Game::checkwin(array))
    {return 0;}
    else{goto a;}
}
