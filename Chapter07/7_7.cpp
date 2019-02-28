/*Design an Inventory class that can hold information for an item in a 
retail store's inventory. The class should have the following private 
member variables.*/

#include <iostream>
#include <iomanip>
using namespace std;

class Inventory
{
    private:
        int itemNumber;
        int quantity;
        double cost;
    
    public:
        Inventory();
        Inventory(int, int, double);
        void setItemNumber(int i)
        {  itemNumber = i;  }
        void setQuantity(int q)
        {  quantity = q;  }
        void setCost(double c)
        {  cost = c;  }
        int getItemNumber()
        {  return itemNumber;  }
        int getQuantity()
        {  return quantity;  }
        double getTotalCost()
        {  
            double totalCost;
            totalCost = (double) quantity * cost;
            return totalCost;
        }
};

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0;
}

Inventory::Inventory(int i, int q, double c)
{
    if(i >= 0 && q >= 0 && c >= 0)
    {
        itemNumber = i;
        quantity = q;
        cost = c;
    }
    getTotalCost();
}

int main()
{
    Inventory inventoryA;
    int itemNumber, quantity;
    double cost;

    cout<<"What is your item number? \n";
    cin>>itemNumber;

    cout<<"What is your quantity? \n";
    cin>>quantity;

    cout<<"What is your cost? \n";
    cin>>cost;

    if(itemNumber >= 0)
        inventoryA.setItemNumber(itemNumber);
    else
        cout<<"Error: You entered a negative value for Item Number! \n";

    if(quantity >= 0)
        inventoryA.setQuantity(quantity);
    else
        cout<<"Error: You entered a negative value for Quantity! \n";

    if(cost >= 0)
        inventoryA.setCost(cost);
    else
        cout<<"Error: You entered a negative value for Cost! \n";

    cout<<fixed<<setprecision(2);
    cout<<"Your total cost is $"<<inventoryA.getTotalCost()<<"."<<endl;
    
    return 0;
}