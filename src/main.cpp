#include <iostream>
#include "SportShoe.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
#include "Function.h"
using namespace std;

vector<SportShoe> sport;   // global vector
vector<FemaleShoe> female; // global vector
vector<MaleShoe> male;     // global vector

int main(int argc, char const *argv[])
{
    srand(static_cast<unsigned int>(time(0)));

    cout << "-------WELCOME TO SHOE SHOP-------- \n";

    while (1)
    {
        cout << "               MENU                 \n";
        cout << "1 . Creat shoes                     \n";
        cout << "2 . Edit                            \n";
        cout << "3 . History                         \n\n";

        unsigned int id;
        string BC;
        string SHL;
        string SL;
        unsigned int S;
        double HL;
        string HC;
    
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            shoes(sport, female, male); // Creat shoes
            break;

        case 2:
            cout << "Please enter shoe ID that you want to edit :";
            cin >> id;
            edit(id, sport, female, male, BC, SHL, SL, S, HL, HC);
            break;

        case 3:
            history(sport, female, male);
            break;
        default:

            break;
        }
    }

    return 0;
}
