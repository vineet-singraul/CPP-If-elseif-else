#include <iostream>
using namespace std;

int main() {
    int userSelection;
    double radius, length, width, base, height, area;
    const double PI = 3.14159; // define the value of pi

    cout << "Enter The Number For Selection:" << endl;
    cout << "1. Area Of Circle (pi*r^2)" << endl;
    cout << "2. Area Of Rectangle (length*width)" << endl;
    cout << "3. Area Of Triangle (0.5*base*height)" << endl;
    
    cin >> userSelection;

    if(userSelection == 1) {
        cout << "Enter radius of the circle: ";
        cin >> radius;
        area = PI * radius * radius;
        cout << "Area of Circle is: " << area << endl;
    }
    else if(userSelection == 2) {
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        area = length * width;
        cout << "Area of Rectangle is: " << area << endl;
    }
    else if(userSelection == 3) {
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        area = 0.5 * base * height;
        cout << "Area of Triangle is: " << area << endl;
    }
    else {
        cout << "Invalid selection!" << endl;
    }

    return 0;
}