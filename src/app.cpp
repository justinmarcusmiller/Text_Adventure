#include <iostream>
using namespace std;

int getMenuSelection(){
    int choice;
    cout << "Enter Selection: ";
    cin >> choice;
    return choice;
}

void displayMenu()
{
    cout << "Main Menu" << endl << endl;

    cout << "Please make a selection:" << endl << endl;

    cout << "1. New Game" << endl;

    cout << "2. Load Game" << endl;

    cout << "3. Options" << endl;

    cout << "4. Exit" << endl << endl;
}

int runMenuSelection(int choice){
    if (choice == 1){
        cout << "Choice is New Game";
    } else if (choice == 2) {
        cout << "Choice is Load Game";
    } else if (choice == 3) {
        cout << "Choice is Options";
    } else if (choice == 4) {
        cout << "Choice is Exit Game";
    } else {
        cout << "Invalid Choice";
    }
    cout << endl;
    return 0;
}

int gameLoop(){
    return 0;
}

int main()
{
    int choice = 0;
    displayMenu();
    choice = getMenuSelection();
    runMenuSelection(choice);
    return 0;
}