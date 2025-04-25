#include <iostream>
#include <cstdlib>

using namespace std;

short  GameRounds = 0;
short  PlayerWinTimes = 0;
short  PCWinTimes = 0;
short  DrawTimes = 0;
string FinalWinner = "";

enum enUrChoices { Stone = 1, Paper = 2, Scissors = 3 };

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int ReadNumberOfRound()
{
    cout << "How many Rounds (1 to 10)? ";
    cin >> GameRounds;
    return GameRounds;
}

enUrChoices ChoiceFromUser(int Choice)
{
    switch (Choice)
    {
    case 1: return Stone;
    case 2: return Paper;
    case 3: return Scissors;
    default: return Stone;
    }
}

enUrChoices RandomChoiceForPC()
{
    int RandomChoice = RandomNumber(1, 3);

    switch (RandomChoice)
    {
    case 1: return  enUrChoices::Stone;
    case 2: return enUrChoices::Paper;
    case 3: return  enUrChoices::Scissors;
    }
}

string ChoiceToString(enUrChoices choice)
{
    switch (choice)
    {
    case Stone: return "Stone";
    case Paper: return "Paper";
    case Scissors: return "Scissors";
    default: return "Unknown";
    }
}

string WhoIsWinner(enUrChoices Player, enUrChoices PC)
{
    if ((Player == Stone && PC == Scissors) ||
        (Player == Paper && PC == Stone) ||
        (Player == Scissors && PC == Paper))
        return "Player";
    else if (Player == PC)
        return "No Winner";
    else
        return "PC";
}

void LogicGame(enUrChoices Player, enUrChoices PC)
{
    if ((Player == Stone && PC == Scissors) ||
        (Player == Paper && PC == Stone) ||
        (Player == Scissors && PC == Paper))
        system("color 2F"); // Green
    else if (Player == PC)
        system("color 6F"); // Yellow
    else
    {
        cout << "\a";
        system("color 4F");

    } // Red
}

void CounterWinAndLossRound(enUrChoices Player, enUrChoices PC)
{
    string winner = WhoIsWinner(Player, PC);

    if (winner == "Player")
        PlayerWinTimes++;
    else if (winner == "PC")
        PCWinTimes++;
    else if (winner == "No Winner")
        DrawTimes++;
}

string FinalWinnerFunc()
{
    if (PlayerWinTimes > PCWinTimes)
        return "Player";
    else if (PlayerWinTimes < PCWinTimes)
        return "PC";
    else
        return "Draw";
}

void GameOver()
{
    cout << "\t____________________________________________________________________________\n";
    cout << "\n\t\t\t\t+++ G a m e  O v e r +++\n";
    cout << "\t____________________________________________________________________________\n";
    cout << "\n\t____________________________[Game Result]___________________________________\n\n";
    cout << "\tGame Round : " << GameRounds << endl;
    cout << "\tPlayer won times : " << PlayerWinTimes << endl;
    cout << "\tPC won times : " << PCWinTimes << endl;
    cout << "\tDraw times : " << DrawTimes << endl;
    cout << "\tFinal Winner : " << FinalWinnerFunc() << endl;
    cout << "\t____________________________________________________________________________\n";
}

void PrintResultRound()
{
    for (int i = 0; i < GameRounds; i++)
    {
        int choice;
        cout << "Your Choice [1] Stone, [2] Paper, [3] Scissors: ";
        cin >> choice;
        cout << "\n_______ Round [" << i + 1 << "] _______\n\n";
        enUrChoices playerChoice = ChoiceFromUser(choice);
        enUrChoices pcChoice = RandomChoiceForPC();

        cout << "Player Choice : " << ChoiceToString(playerChoice) << endl;
        cout << "PC Choice     : " << ChoiceToString(pcChoice) << endl;
        cout << "Round Winner  : " << WhoIsWinner(playerChoice, pcChoice) << endl;
        cout << "_________________________\n\n";
        CounterWinAndLossRound(playerChoice, pcChoice);
        LogicGame(playerChoice, pcChoice);
    }
}

void ClearScreen()
{
    system("cls");
    system("color 0F");
}

void StartGame()
{
    char Playagain = 'Y';
    do
    {
        ClearScreen();
        ReadNumberOfRound();
        PrintResultRound();
        GameOver();

        cout << "\n";
        cout << "\tDo you want to play again? Y/N ? ";
        cin >> Playagain;

    } while (Playagain == 'Y' || Playagain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}
