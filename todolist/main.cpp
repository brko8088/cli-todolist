//
//  Created by Bruno Köppel on 9/24/20.
//

#include "Checklist.hpp"
#include "TextEntry.hpp"
#include <iostream>
// #include <termios.h>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;

string TCLIversion = "0.1.0";
void greetUser();
// bool processCommand(string command, Checklist todoList[], TextEntry journal[]);

int main()
{
    fstream inputFromFile;
    fstream outputToFile;
    string command = "";
    string userInputCommand[10];
    string userName;
    bool programState = true;
    // Checklist todoList[100];
    // TextEntry journal[100];

    greetUser();
    startUpChecklist();

    // userName = loadPreviousSessionUserName(inputFromFile);
    // lookForUsersDatabaseOrCreateNew(userName, inputFromFile, todoList);
    // outputToDatabase(userName, outputToFile);

    while (programState)
    {
        cout << userName + "~" + TCLIversion + "~ ";
        getline(cin, command);
        // programState = processCommand(command, todoList, journal);
    }

    return 0;
}

void greetUser()
{
    cout << "Tournal Command Line Interface (TCLI)" << endl;
    cout << "Current Version: " + TCLIversion << endl;
}

void startUpChecklist()
{
}

// bool processCommand(string command, Checklist todoList[], TextEntry journal[])
// {
//     string action;
//     size_t delimeterPos = command.find(' ');
//     if (delimeterPos > 0 && delimeterPos < 200)
//     {
//         action = command.substr(0, delimeterPos);

//         while (action == "")
//         {
//             command = command.substr(delimeterPos + 1);
//             delimeterPos = command.find(' ');
//             action = command.substr(0, delimeterPos);
//         }
//     }
//     else
//     {
//         action = command;
//         command = "";
//     }

//     command = command.substr(delimeterPos + 1);

//     if (action == "create")
//     {
//         // return createNewItem(command, todoList);
//     }
//     else if (action == "entry")
//     {
//         // return createTextEntry(command, journal);
//     }

//     else if (action == "display")
//     {
//         // return displayTodoList(todoList);
//     }

//     else if (action == "delete")
//     {
//         // return deleteNewItem(command, todoList);
//     }
//     else if (action == "modify")
//     {
//         return true;
//     }
//     else if (action == "duplicate")
//     {
//         return true;
//     }
//     else if (action == "exit")
//     {
//         return false;
//     }
//     else
//     {
//         cout << "Command not recognized." << endl;
//         return true;
//     }
//     return true;
// }
