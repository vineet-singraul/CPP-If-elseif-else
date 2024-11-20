#include <iostream>>
using namespace std;
int main()
{
    int path;
    cout<<"Enter The Path: ";
    cin>>path;

    if(path == 1)
    {
        cout<<"Enter The Path: ";
        cin>>path;       

        if(path == 2)
        {
            cout<<"Enter The Path: ";
            cin>>path; 

            if(path == 4)
            {
                cout<<"You Got Your Destination:";
            }    
            else if(path == 3)
            {
                cout<<"Enter The Path :";
                cin>>path;
                if(path == 4)
                {
                    cout<<"You Got Your Destination:";
                }
                else{
                    cout<<"Invailed Path :";
                }
            }
            else{
                cout<<"Invalied path :";
            }
        }

        else if(path == 3)
         {
            cout<<"Enter The Path: ";
            cin>>path; 
            if(path == 4)
            {
                cout<<"You Got Your Destination:";
            }
            else if(path == 2){
                cout<<"Enter The Path :";
                cin>>path;
                if(path == 4)
                {
                    cout<<"You Got Your Destination :";
                }
                else{
                    cout<<"Invailed path :";
                }
            }
            else{
                cout<<"Invalied path :";
            }
         }

        else if(path == 4)
        {
            cout<<"You Got Your Destination :";
        }
         
        else
        {
            cout<<"Invailed Path :";
        }
    }
    else
    {
        cout<<"Invailed path :";
    }
}