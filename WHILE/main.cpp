#include <iostream>
#include <string>
using namespace std;

int main()
{
    int variable = 0; //for counting the no. of loops.
//*******************WHILE LOOP***********************
    while(variable < 10) // A condition must be placed inside of ().
    {
        variable++; // Adds 1 unit to the counter value.
        cout << variable << endl; // print the counter value.
    } /* The while loop checks if the condition is met
    if not then it performs all loop functions again.
        */

        cout << endl;
//*******************FOR LOOP*************************
    for( int variable = 1; variable < 11; variable++){
        cout << variable << endl;
    }

        cout << endl;
    int x = 0;
//********************DO WHILE LOOP*******************
    do{
        x++;
        cout << x << endl;
    }while(x < 10);

    return 0;
}
//************************THE END**********************
