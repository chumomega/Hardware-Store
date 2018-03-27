// Chuma Okoro CISC 3130 MY9 ShoppingCart.cpp

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart(): mycart()
{}

void ShoppingCart::addItem(const Item& item)
{
    mycart.push_back(item);
}

double ShoppingCart::grandTotal()
{
    double total=0;
    list<Item>::const_iterator it=mycart.begin();
    while(it!=mycart.end())
    {
        total+=(*it).getPrice();
        it++;

    }
    return total;
}

int ShoppingCart::numItems()
{
    return mycart.size();
}

ostream& operator<<(ostream& os, const ShoppingCart& sc)
{
    os<<"The following are the contents of your shopping cart:"<<endl;
    for(list<Item>::const_iterator it=sc.mycart.begin();it!=sc.mycart.end();it++)
    {
        os<<(*it);
    }
    return os;
}
