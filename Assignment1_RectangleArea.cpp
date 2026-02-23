#include <iostream>

using namespace std;

int main()
{
	int height1;
    int width1;
    int area1;
    int height2;
    int width2;
    int area2;

    cout << "Enter height and width of the first rectangle: " << endl;
    cin >> height1;
    cin >> width1; 
    area1 = height1 * width1;
    cout << "Enter height and width of the second rectangle: " << endl;
    cin >> height2;
    cin >> width2;
    area2 = height2 * width2;
    if (area1 > area2) {
        cout << "The 1st rectangle has a greater area." << endl;
    } else if (area1 < area2) {
        cout << "The 2nd rectangle has a greater area." << endl;

    } else if (area1 = area2){
        cout << "The areas are the same." << endl;
    }
    

    return 0;
}

