
#include <iostream>
using namespace std;
int main()
{
    int unit;
    cout<<"Enter The Uite Of Bill : ";
    cin>>unit;
    
    if(unit >= 0 && unit <= 50)
    {
        cout<<"The Total Bill Is : "<< (12*unit);
    }
    else if(unit >= 50 && unit <= 100)
    {
        cout<<"The Total Bill Is : "<< ((50*12))+((unit-50)*15);
    }
    else if(unit >= 100 && unit <= 150)
    {
        cout<<"The Total Bill Is : "<< ((50*12))+((50*15))+((unit-100)*18);
    }
    else if(unit >= 150 && unit <= 200)
    {
        cout<<"The Total Bill Is : "<< (50*12)+((50*15))+((50*18))+((unit-150)*20);
    }
    else{
        cout<<"Invailed Number : ";
    }
}




