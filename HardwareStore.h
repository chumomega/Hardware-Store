// Chuma Okoro CISC 3130 MY9 HardwareStore.h
#ifndef HARDWARESTORE_H
#define HARDWARESTORE_H
#include "inventory.cpp"
#include "shopper.cpp"
#include<queue>


class HardwareStore
{
    string file1; //for the Inventory
    Inventory inv1;//Inventory object
    double income;
    vector<queue <Shopper> > registers;
public:
    HardwareStore(int numRegisters);
    void addShopperToLine(const Shopper& shopper);
    void processShopper();
    void checkoutAllShoppers();
    double totalRevenue() {return income;}
    double getItemprice(const string& newitem) {return inv1.findItemprice(newitem);}


};





#endif // HARDWARESTORE_H

