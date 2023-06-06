
#include <iostream>

using namespace std;

int main()
{
    //
    int sales[12];

    // store input from the user to the array
    for(int i=0; i<12; ++i)
    {
        cout<< "Enter Value for Position " << i << " : ";
        cin>>sales[i];

    }

    cout<< "\n User input Values\n";
    for(int n=0; n<12; n++)
    {
        cout<<" Postion: " << n << " , Sales Value: " << sales[n] << " \n";
    }


    return 0;
 }

