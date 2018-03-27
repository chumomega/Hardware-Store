// Chuma Okoro CISC 3130 MY9 ShoppingCart.h

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
using namespace std;
#include <iostream>
#include <list>
#include "item.h"

class ShoppingCart
{
    list<Item> mycart;
public:
    ShoppingCart();
    void addItem(const Item& item);
    double grandTotal();
    int numItems();
    friend ostream& operator<<(ostream& os, const ShoppingCart& sc);


};

#endif // SHOPPINGCART_H

