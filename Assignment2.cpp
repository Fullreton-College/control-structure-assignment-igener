//Assignment 2
#include <iostream>

using namespace std;

int main()
{
    double cost = 199;
    double units;
    double total;
    cout << "Enter number of units purchased: " << endl;
    cin >> units; 
    total = cost * units;
    if (units >= 100) {
       total = total * 0.5;
    } else if (units <= 99 && units >= 50){
        total = total * 0.6;
    } else if (units <= 49 && units >= 20) {
        total = total * 0.7;
    } else if (units <= 19 && units >= 10){
        total = total * 0.8;
    }

    



    cout << "Total cost: $" << total << endl;
    return 0;
}
