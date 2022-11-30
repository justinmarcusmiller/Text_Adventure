#include <iostream>
using namespace std;

void getMenuSelection(){
    cout << "Enter Selection: " <<endl;
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

int main()
{
    displayMenu();
    getMenuSelection();
    return 0;
}