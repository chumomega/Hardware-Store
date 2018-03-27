// Chuma Okoro CISC 3130 MY9 item.h

#ifndef ITEM_H
#define ITEM_H
using namespace std;
#include <iostream>
#include <iomanip>


class Item
{
    string name;
    double price;

public:
    Item(const string& name1="hammer", double price1=10.25): name(name1),price(price1)
    {}
    string getName() {return name;}
    double getPrice() const {return price;} //const because I use a const_iterator
    friend ostream& operator<< (ostream& os, const Item& item)
    {
        os<<"A "<<item.name<<" that costs $"<<setprecision(2)<<fixed<<item.price<<endl<<endl;
        return os;

    }
    friend bool operator==(const Item& item1,const Item& item2)
    {
        if(item1.name==item2.name&&item1.price==item2.price)
        {
            return true;
        }
        return false;
    }


};

/*
    operator=(const Item& item1)
    {
        name=item1.getName();
        price=item1.getPrice();
    }
*/
#endif // ITEM_H
