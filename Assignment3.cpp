//Assignment 3
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string plan;
    int gigs;
    double a = 39.99;
    double b = 59.99;
    double c = 79.99;
    double difference1;
    double difference2;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter plan (use capital letters): ";
    cin >> plan;
    cout << "Enter gigabytes used: ";
    cin >> gigs;
    if (plan == "A") {
        if (gigs > 2){
            a = a + ((gigs-2) * 8);
        }
        cout << name << "'s (Plan " << plan << ") total: $" << a << endl;
        
    } else if (plan == "B") {
        if (gigs > 8){
            b = b + ((gigs-8) * 8);
        }
        cout << name << "'s (Plan " << plan << ") total: $" << b << endl;

    } else if (plan == "C"){
        cout << name << "'s (Plan " << plan << ") total: $" << c << endl;
    }
    
    if (plan == "A"){
        if (gigs > 8){
            b = b + ((gigs-8) * 8);
        }
        difference1 = a - b;
        difference2 = a - c;
        if (difference1 > 0 && difference2 > 0){
            cout << "You would save $" << difference1 << " if you got Plan B and $" << difference2 << " if you got Plan C." << endl;
        }
    }

    if (plan == "B"){
        difference1 = b - c;
        if (difference1 > 0){
            cout << "You would save $" << difference1 << " if you got Plan C." << endl;
        }
    }




 
    return 0;
}