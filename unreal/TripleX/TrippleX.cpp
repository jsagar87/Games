#include <iostream>

using namespace std;

void Challenge(int diffcultyLevel) {
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

    // Store player guess
    int GuessA, GuessB, GuessC;
    cout << endl << "enter your guess now :: " ;
    // cin >> GuessA;
    // cin >> GuessB;
    // cin >> GuessB;

    // // cout << endl << "You entered: " << GuessA << GuessB << GuessC << endl;

    int GuessSum, GuessProduct;
    GuessSum = GuessA + GuessB + GuessC ;
    GuessProduct = GuessA * GuessB * GuessC ;

    if (CodeSum == GuessSum && CodeProduct == GuessProduct) {
        cout << endl << "You win !" << endl;
    }
    else
    {
        cout << endl << "You lose!" << endl;
    }
}

int main(){
    Challenge(2);
    return 0;
}