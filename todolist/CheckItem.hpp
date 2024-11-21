//
//  CheckItem.hpp
//  TournalCLI
//
//  Created by Bruno Köppel on 10/3/20.
//

#ifndef CheckItem_hpp
#define CheckItem_hpp
#include <string>

class CheckItem
{
private:
    int ID = 0;
    std::string name;
    int priority; // 1: lowest 5: highest
    bool completed;

public:
    CheckItem()
    {
        setName("");
        setPriority(0);
        setCompleted(false);
    }

    CheckItem(std::string newName)
    {
        setName(newName);
        setPriority(1);
        setCompleted(false);
    }

    CheckItem(std::string newName, int newPriority, bool newCondition)
    {
        setName(newName);
        setPriority(newPriority);
        setCompleted(newCondition);
    }

    /*
     Setters
     */
    void setID(int newID)
    {
        this->ID = newID;
    }

    void setName(std::string name)
    {
        this->name = name;
    };

    void setPriority(int number)
    {
        this->priority = number;
    };

    void setCompleted(bool completed)
    {
        this->completed = completed;
    };

    /*
     Getters
     */
    int getID()
    {
        return this->ID;
    }

    std::string getName()
    {
        return this->name;
    }

    int getPriority()
    {
        return this->priority;
    }

    bool getCompleted()
    {
        return this->completed;
    }

    void deleteItem();
    std::string printCompleted();
    std::string printPriority();
    std::string displayItem();
};

#endif /* CheckItem_hpp */
