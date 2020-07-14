#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void PrintIntroduction(int Difficulty)
{
// This is welcome message
    cout << "\n\nYou're a secret agent breaking into a level "<<  Difficulty << endl ;
    cout << "Enter the correct code to continue...\n" << endl ;
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    // Declare 3 number code

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty ;

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
    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;

    int GuessSum, GuessProduct;
    GuessSum = GuessA + GuessB + GuessC ;
    GuessProduct = GuessA * GuessB * GuessC ;

    if (CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        cout << endl << "*** Well Done agent! You have extracted a file! Keep going! ***" << endl;
        return true;
    }
    else
    {  
        cout << endl << "*** You entered the wrong code! Careful agent! Try again! ***" << endl;
        return false;
    }
}

int main()
{
    srand(time(NULL)); 
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    while (LevelDifficulty <= MaxDifficulty) // Loop untill all levels are completed
    {
        // std::cout << rand() << "\n";
        bool bLevelCOmplete = PlayGame(LevelDifficulty);
        std::cin.clear();       // Clears any errors
        std::cin.ignore();      // Discards the buffer
        if (bLevelCOmplete)
        {
            LevelDifficulty++;
        }
    }
    cout << "\n *** Great work agent! You got all the files! Now  get out of there! ***\n" ;
    return 0;
}