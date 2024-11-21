//
//  Checklist.hpp
//  TournalCLI
//
//  Created by Bruno Köppel on 10/3/20.
//

#ifndef Checklist_hpp
#define Checklist_hpp

#include "CheckItem.hpp"
#include "CheckItem.cpp"
#include <iostream>
#include <vector>
#include <string>

class Checklist
{
private:
    static std::vector<CheckItem> checkItems;

public:
    Checklist()
    {
        checkItems = std::vector<CheckItem>();
    }

    std::vector<CheckItem> getCheckItems()
    {
        return checkItems;
    }

    CheckItem getItem(int index)
    {
        return getCheckItems().at(index);
    }

    void addCheckitem(CheckItem item)
    {
        getCheckItems().push_back(item);
    }
    void removeCheckitemAtPosition(int itemPosition)
    {
        getCheckItems().erase(getCheckItems().begin() + itemPosition);
    };
};

#endif /* Checklist_hpp */
