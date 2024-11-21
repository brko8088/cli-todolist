//
//  CheckItem.cpp
//  TournalCLI
//
//  Created by Bruno Köppel on 10/3/20.
//

#include "CheckItem.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

void CheckItem::deleteItem()
{
    setName("");
    setPriority(0);
    setCompleted(false);
}

std::string CheckItem::displayItem()
{
    std::stringstream item;
    item << std::setw(8) << std::left << "";
    item << std::setw(2) << std::left << "[";
    item << std::setw(2) << std::left << printCompleted();
    item << std::setw(8) << "]";
    item << std::setw(8) << std::left << printPriority();
    item << std::setw(40) << std::left << getName();
    return item.str();
}

std::string CheckItem::printPriority()
{
    std::stringstream text;
    int num = getPriority();
    if (num == 0)
    {
        text << "";
    }
    else if (num == 1)
    {
        text << "!";
    }
    else if (num == 2)
    {
        text << "!!";
    }
    else if (num == 3)
    {
        text << "!!!";
    }
    return text.str();
}

std::string CheckItem::printCompleted()
{
    std::stringstream text;
    bool con = getCompleted();
    if (con)
        text << "x";
    else
        text << " ";
    return text.str();
}
