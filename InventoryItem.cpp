//
// Created by Work on 9/9/2026.
//

#include "InventoryItem.h"

#include <iomanip> //for setw
#include<iostream> //for cout


void InventoryItem::setItemName(const std::string &newItemName)
{
    itemName = newItemName;
}

void InventoryItem::setItemPrice(double newItemPrice)
{
    itemPrice = newItemPrice;
}

void InventoryItem::setUnitsAvailable(int newUnitsAvailable)
{
    unitsAvailable = newUnitsAvailable;
}

std::string InventoryItem::getItemName() const
{
    return itemName;
}

double InventoryItem::getItemPrice() const
{
    return itemPrice;
}

int InventoryItem::getUnitsAvailable() const
{
    return unitsAvailable;
}

InventoryItem::InventoryItem() = default;

InventoryItem::InventoryItem(const std::string &itemName, double itemPrice, int unitsAvailable)
    :
itemName(itemName), itemPrice(itemPrice), unitsAvailable(unitsAvailable)
{
    //add validity checks here for realism (goodness)
    // if (itemPrice < 0.0)
    // {
    //     std::cout << "Don't give the customer money!\n"''
    // }
    //remains empty
}

double InventoryItem::calculateTotalValue() const
{
    return unitsAvailable * itemPrice;
}

void InventoryItem::print() const
{
    const int NAME_COLUMN_WIDTH = 25;
    const int COUNT_COLUMN_WIDTH = 5;
    const int COST_COLUMN_WIDTH = 10;

    std::cout << std::left << std::setw(NAME_COLUMN_WIDTH)  << itemName;
    std::cout << std::left << std::setw(COUNT_COLUMN_WIDTH) << unitsAvailable;
    std::cout << std::left << std::setw(COST_COLUMN_WIDTH) << itemPrice;
    std::cout << "\n";
}


