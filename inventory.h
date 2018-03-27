// Chuma Okoro CISC 3130 MY9 Inventory.h
#ifndef INVENTORY_H
#define INVENTORY_H
#include<vector>
#include<fstream>
#include "item.h"

class Inventory
{
    vector<Item> items;
public:
    Inventory(const string& fileName);
    double findItemprice(const string& name);


};














#endif // INVENTORY_H
