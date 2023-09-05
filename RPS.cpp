//Simple rock paper scissors game using c++
//Implement a GUI with this program

#include <stdio.h> // printf, scanf, puts, NULL
#include <stdlib.h> // srand, rand
#include <string.h> // strcmp
#include <iostream> // help fixing 'cout' and 'endl'
#include <time.h> // time

const char rock = 'r';
const char paper = 'p';
const char scissors = 's';
int score = 0;

using namespace std;

char computerChoice()
{
    //Initialise random seed
    srand (time(0));

     //generate random number for computer
    int computer = rand() % 3 + 1;

    switch (computer)
    {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
}

char userOption()
{
    char choice;
    scanf ("Enter (r) for rock, (p) for paper or (s) for scissors: %s", &choice);
    return choice;
}

void winner(char compChoice, char playerChoice)
{
    if (playerChoice == 'r' && compChoice == 's')
    {
        cout << "you win!" << endl;
        score++;
    }
    else if (playerChoice == 'p' && compChoice == 'r')
    {
        cout << "you win!" << endl;
        score++;
    }
    else if (playerChoice == 's' && compChoice == 'p')
    {
        cout << "you win!" << endl;
        score++;
    }


    else if (playerChoice == 'r' && compChoice == 'p')
    {
        cout << "Computer wins" << endl;
    }
    else if (playerChoice == 'p' && compChoice == 's')
    {
        cout << "Computer wins" << endl;
    }
    else if (playerChoice == 's' && compChoice == 'r')
    {
        cout << "Computer wins" << endl;
    }
    
    else
    {
        cout << "It's a tie" << endl;
    }

}

int main()
{
    char playerChoice;
    char compChoice;
    
    playerChoice = userOption();
    cout << "You chose: " << playerChoice << endl;
    
    compChoice = computerChoice();
    cout << "The computer chose: " << compChoice << endl;

    winner(playerChoice, compChoice);

    return 0;

}
