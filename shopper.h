// Chuma Okoro CISC 3130 MY9 shopper.h
#ifndef SHOPPER_H
#define SHOPPER_H
using namespace std;
#include "ShoppingCart.cpp"

class Shopper
{
    string first, last;
    ShoppingCart cart1;
public:
    Shopper(const string& firstName, const string& lastName);
    void addItemToCart(const Item& item, int numItems=1);
    double amountOwed();
    friend ostream& operator<<(ostream& os, const Shopper& shopper);




};







#endif // SHOPPER_H
