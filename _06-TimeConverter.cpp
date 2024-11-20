#include <iostream>
using namespace std;
int main()
{
    int time, minet, storedTime;
    cout << "Enter Howres : ";
    cin >> time;
    cout << "Enter Minets : ";
    cin >> minet;
    if (time >= 12 && time <= 99)
    {
        storedTime = time - 12;
        if (storedTime > 0 && storedTime <= 9)
        {
            cout << "The Time Is : " << "0" << storedTime << ":" << minet<<"PM";
        }
        else if(storedTime >= 10 && storedTime <= 12)
        {
            cout << "The Time Is : " << storedTime << ":" << minet<<"PM";
        }
        else{
            cout << "The Time Is : " << storedTime << ":" << minet<<"PM";

        }
    }
    else if (time == 11)
    {
        storedTime = time;
        cout << "The Time Is : " << storedTime << ":" << minet<<"AM";
    }
    else
    {
        storedTime = time;
        cout << "The Time Is : "<< "0" << storedTime << ":" << minet<<"PM";
    }
}