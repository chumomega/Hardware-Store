// Chuma Okoro CISC 3130 MY9 HardwareSimulator.cpp
#include "HardwareStore.cpp"
#include <fstream>

int main()
{
    string firstName="Chuma", lastName="Okoro";
    //event code

    HardwareStore store1(3);
    ifstream infile("event.txt"); //converts the string to a c string
    char actionLetter;
    while(infile>>actionLetter)
    {
        if(actionLetter=='P')
            store1.processShopper();
        else if(actionLetter=='S')
        {
            int numItems;
            infile>>numItems;
            Shopper human(firstName,lastName);
            while(numItems!=0)
            {
                string tempName;
                double tempPrice;
                int quantity;

                infile>>tempName>>quantity;
                tempPrice=store1.getItemprice(tempName);//putprice into tempprice

                Item newitem(tempName,tempPrice); //item with name and searched price
                human.addItemToCart(newitem,quantity);

                store1.addShopperToLine(human);
                numItems--;
            }
        }
    }
    store1.checkoutAllShoppers();

    cout<<"The total revenue is "<<setprecision(2)<<fixed<<store1.totalRevenue();
    infile.close();













    return 0;
}
