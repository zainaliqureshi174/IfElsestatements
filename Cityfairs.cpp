#include <iostream>
using namespace std;
int main()
{int a, b;
    cout << "Chose one number as set to every corresponding city.\n";
    cout << "1:Islamabad, 2:Lahore, 3:pishawar, 4:Karachi, 5:Faisalabad.\n";
    cout << "Select your start point :  ";
    cin >> a;
    cout << "Select your destination : ";
    cin >> b;
    if (a==1)
    {
       if (b==2)
        {
            cout<<"Your fare is 1200PKR.\n";
        }
        else if (b==3)
        {
            cout<<"Your fare is 1000PKR.\n";
        }
        else if (b==4)
        {
            cout<<"Your fare is 6000PKR.\n";
        }
        else if (b==5)
        {
            cout<<"Your fare is 1400PKR.\n";
        }
    }
    else if (a==2)
    {
        if (b==1)
        {
            cout<<"Your fare is 1200PKR.\n";
        }
        else if (b==3)
        {
            cout<<"Your fare is 1800PKR.\n";
        }
        else if (b==4)
        {
            cout<<"Your fare is 48000PKR.\n";
        }
        else if (b==5)
        {
            cout<<"Your fare is 1400PKR.\n";
        }
    }
     else if (a==3)
    {
        if (b==1)
        {
            cout<<"Your fare is 1000PKR.\n";
        }
        else if (b==2)
        {
            cout<<"Your fare is 1800PKR.\n";
        }
        else if (b==4)
        {
            cout<<"Your fare is 7000PKR.\n";
        }
        else if (b==5)
        {
            cout<<"Your fare is 2400PKR.\n";
        }
    }
    else if (a==4)
    {
        if (b==1)
        {
            cout<<"Your fare is 6000PKR.\n";
        }
        else if (b==2)
        {
            cout<<"Your fare is 4800PKR.\n";
        }
        else if (b==3 )
        {
            cout<<"Your fare is 7000PKR.\n";
        }
        else if (b==5)
        {
            cout<<"Your fare is 6200PKR.\n";
        }
    }
     else if (a==5)
    {
        if (b==1)
        {
            cout<<"Your fare is 1400PKR.\n";
        }
        else if (b==2)
        {
            cout<<"Your fare is 1400PKR.\n";
        }
        else if (b==3 )
        {
            cout<<"Your fare is 2400PKR.\n";
        }
        else if (b==4)
        {
            cout<<"Your fare is 6200PKR.\n";
        }
    }
return 0;
}
