#include <iostream>
using namespace std;
int main()
{
    string choice;
    cout<<"Enter You Choice For Trip :"<<endl;
    cout<<"1.international"<<endl<<"2.domestic"<<endl;
    cin>>choice;
    if( "international" == choice)
    {
        cout<<"In International Chose Your Trip :"<<endl;
        cout<<"1.UK"<<endl<<"2.US"<<endl<<"3.Canada"<<endl<<"4.Japan"<<endl;
        cin>>choice;
        if("uk" == choice)
        {
            cout<<"Only 1200 $ you can make trip :";
        }
        else if("us" == choice)
        {
            cout<<"Only 13300 $ you can Make trip:";
        }
        else if("canada" == choice)
        {
            cout<<"Only 12297 $ you can make trip:";
        }
        else if("japan" == choice)
        {
            cout<<"Only 12400 $ you can make trip :";
        }
    }
    else
    {
        cout<<"In International Chose Your Trip :"<<endl;
        cout<<"1.Uttrakhand"<<endl<<"2.Ram mandir"<<endl<<"3.barsana"<<endl<<"4.Vrandavan"<<endl;
        cin>>choice;
        if("uttrakhand" == choice)
        {
            cout<<"Only 1200 $ you can make trip :";
        }
        else if("rammandir" == choice)
        {
            cout<<"Only 13300 $ you can Make trip:";
        }
        else if("barsana" == choice)
        {
            cout<<"Only 12297 $ you can make trip:";
        }
        else if("vrandavan" == choice)
        {
            cout<<"Only 12400 $ you can make trip :";
        }
    }
}