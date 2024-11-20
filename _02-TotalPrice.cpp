#include <iostream>
using namespace std;
int main()
{
    int maxPrice, costPrice , sellPrice, profit,loss,eual,totalPriceIs;
    cout<<"Enter The Max Price Of Product :";
    cin>>maxPrice;
    cout<<"Enter The C Price :";
    cin>>costPrice;
    cout<<"Enter The selling Price : ";
    cin>>sellPrice;
    if(sellPrice > costPrice)
    {
        cout<<"You Gatting Profit In This Product :"<<endl;
        profit = sellPrice - costPrice;
        cout<<"Your Prafit Is : "<<profit<<endl;
    }
    else if(sellPrice < costPrice)
    {
        cout<<"You Gatting Loss In This Product :"<<endl;
        loss = sellPrice - costPrice;
        cout<<"Your Loss Is : "<<loss<<endl;
    }
    else if(sellPrice == costPrice)
    {
        cout<<"You Gatting Never loss and profit In This Product :"<<endl;
        eual = sellPrice - costPrice;
        cout<<"Never Profit and loss Is :"<<eual<<endl;
    }
    else{
        cout<<"You Giving Invalied Price : "<<endl; 
    }
    totalPriceIs = sellPrice + sellPrice * (0.15);
    // totalPriceIs = (sellPrice * 15) / 100;  
    cout<<"Your Total Price Is : "<<totalPriceIs<<endl;
}

