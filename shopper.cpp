// Chuma Okoro CISC 3130 MY9 shopper.cpp
#include "shopper.h"
#include <cmath>

Shopper::Shopper(const string& firstName, const string& lastName): first(firstName), last(lastName), cart1()
{}

void Shopper::addItemToCart(const Item& item, int numItems)
{
    int temp=numItems;
    while(temp!=0)
    {
        cart1.addItem(item);
        temp--;
    }
}

double Shopper::amountOwed()
{
    double total=cart1.grandTotal();
    total+=total*.08875;
    return total;


}

ostream& operator<<(ostream& os, const Shopper& shopper)
{
    os<<endl<<shopper.first<<' '<<shopper.last<<endl;
    os<<shopper.cart1;
    return os;

}



