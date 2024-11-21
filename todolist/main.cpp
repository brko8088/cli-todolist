//
//  Created by Bruno Köppel on 9/24/20.
//

#include "Checklist.hpp"
#include "CheckItem.hpp"
#include "TextEntry.hpp"
#include <iostream>
// #include <termios.h>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

std::string TCLIversion = "0.1.0";
void greetUser();
bool processCommand(std::string, Checklist checklist);
bool createNewItem(string command, Checklist checklist);
bool deleteNewItem(string command, Checklist checklist);

int main()
{
    fstream inputFromFile;
    fstream outputToFile;
    string command = "";
    string userInputCommand[10];
    string userName;
    bool programState = true;
    Checklist checklist = Checklist();

    greetUser();

    while (programState)
    {
        cout << userName + "~" + TCLIversion + "~ ";
        getline(cin, command);
        programState = processCommand(command, checklist);
    }

    return 0;
}

void greetUser()
{
    cout << "Tournal Command Line Interface (TCLI)" << endl;
    cout << "Current Version: " + TCLIversion << endl;
}

bool processCommand(string command, Checklist checklist)
{
    string action;
    size_t delimeterPos = command.find(' ');
    if (delimeterPos > 0 && delimeterPos < 200)
    {
        action = command.substr(0, delimeterPos);

        while (action == "")
        {
            command = command.substr(delimeterPos + 1);
            delimeterPos = command.find(' ');
            action = command.substr(0, delimeterPos);
        }
    }
    else
    {
        action = command;
        command = "";
    }

    command = command.substr(delimeterPos + 1);

    if (action == "create")
    {
        return createNewItem(command, checklist);
    }
    else if (action == "delete")
    {
        return deleteNewItem(command, checklist);
    }
    else if (action == "exit")
    {
        return false;
    }
    else
    {
        cout << "Command not recognized." << endl;
        return true;
    }
    return true;
}

bool createNewItem(string command, Checklist checklist)
{
    int index = 0;
    std::string currentName = checklist.getItem(index).getName();

    while (currentName != "")
    {
        index++;
        currentName = checklist.getItem(index).getName();
    }

    CheckItem newItem = CheckItem(command);
    checklist.addCheckitem(newItem);
    return true;
}

bool deleteNewItem(string command, Checklist checklist)
{
    // int todoIndex;

    // if (command == "")
    // {
    //     cout << "item ID: ";
    //     cin >> todoIndex;
    // }
    // else
    // {
    //     todoIndex = stoi(command);
    // }

    // todoList[todoIndex].deleteTodo();
    // TotalOfTodos--;

    // // Rearranging list so that IDs get reused.
    // for (int index = 0; index <= TotalOfTodos; index++)
    // {
    //     if (todoList[index].getName() == "" && todoList[index + 1].getName() == "")
    //     {
    //         todoList[index] = todoList[index + 1];
    //     }
    // }

    return true;
}