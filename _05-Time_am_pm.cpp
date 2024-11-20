#include <iostream>
using namespace std;
int main()
{
    int time;
    cout<<"Enter Time :";
    cin>>time;
    if(time < 12 && time > 6)
    {
        cout<<"PM :";
    }
    else{
        cout<<"AM :";
    }
}