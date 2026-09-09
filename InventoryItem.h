//
// Created by Work on 9/9/2026.
//

#ifndef INC_1437_INVENTORY_H
#define INC_1437_INVENTORY_H

#include <string>


class InventoryItem
{
    //there is an invisible "private" here:
private:
    std::string itemName;
    double itemPrice = 0.0;
    int unitsAvailable = 0;

public:
    void setItemName(const std::string& newItemName);
    void setItemPrice(double newItemPrice);
    void setUnitsAvailable(int newUnitsAvailable);

    std::string getItemName() const; //const prevents modification of any member variables
    double getItemPrice() const; //a funky declaration ends with a semicolon
    int getUnitsAvailable() const;


    ///@brief the default constructor (has 0 args)
    InventoryItem();
    ///@brief this is a "parameterized" constructor func
    InventoryItem(const std::string& itemName, double itemPrice, int unitsAvailable);

    double calculateTotalValue() const;

    void print() const;


};


// class Store
// {
//     std::vector<InventoryItem> items; //later -> composition
//
//     std::string managerName = "Bob";
//
// };

// class CustomDynamicArray//wrapper around std::vector with extra functionality

#endif //INC_1437_INVENTORY_H
