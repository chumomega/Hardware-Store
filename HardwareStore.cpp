// Chuma Okoro CISC 3130 MY9 HardwareStore.cpp
#include "HardwareStore.h"

HardwareStore::HardwareStore(int numRegisters):income(0),file1("inventory.txt"),inv1(file1)
{
    for (int i=1;i<=numRegisters;i++)
    {
        queue<Shopper> line1;
        registers.push_back(line1);
    }


}

void HardwareStore::addShopperToLine(const Shopper& shopper)
{
    int shortest=0;
    for(int i=0;i<registers.size();i++)
    {
        if(shortest>registers[i].size())
            shortest=registers[i].size();
    }
    registers[shortest].push(shopper);

}

void HardwareStore::processShopper()
{
    int longestline=0;
    for(int i=1;i<registers.size();i++)
    {
        if(registers[longestline].size()<registers[i].size())
            longestline=i;
    }
    income+=registers[longestline].front().amountOwed(); //adds the amount owed of the shopper in front of the longest register
    registers[longestline].pop();//remove shopper from his respective register

}

void HardwareStore::checkoutAllShoppers()
{
    for(int i=0;i<registers.size();i++)
    {
        while(registers[i].size()!=0)
        {
            income+=registers[i].front().amountOwed(); //adds the amount owed of the shopper in front of the longest register
            registers[i].pop();//remove shopper from his respective register


        }
    }
}


