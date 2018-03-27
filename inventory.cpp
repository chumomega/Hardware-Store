// Chuma Okoro CISC 3130 MY9 Inventory.cpp
#include "inventory.h"

Inventory::Inventory(const string& fileName)
{
    ifstream infile(fileName.c_str()); //converts the string to a c string
    string name1;
    double price1;
    while(infile>>name1>>price1)
    {
        Item temp(name1,price1);
        items.push_back(temp);
    }
    infile.close();
}

double Inventory::findItemprice(const string& name)
{
    for(int i=0;i<items.size();i++)
    {
        if(items[i].getName()==name)
            return items[i].getPrice();
    }
    return 0.00;
}
