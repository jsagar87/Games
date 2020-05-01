#include <iostream>

using namespace std;

int main(){

    // This is welcome message
    cout << "You're the phishy guy. Trying to sneak into colleagues Workstation." << endl ;
    cout << "Enter the correct code to continue..." << endl ;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB *CodeC;

    cout << endl;
    // Print CodeSum and CodeProduct to the terminal
    cout << "+ There are 3 Numbers in the code." << endl ;
    cout << "+ The codes add-up to: " << CodeSum  << endl ;
    cout << "+ The codes multiply to give: " << CodeProduct << endl ;

    int PlayerGuess;
    cout << endl << "enter your guess now :: " ;
    cin >> PlayerGuess;

    cout << endl << "You entered: " << PlayerGuess << endl;

    return 0;
}