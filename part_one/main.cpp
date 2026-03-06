#include <iostream>
#include "lingkaran.h"
using std::cout, std::cin;

int main(){
        float r;

        cout << "Enter circle radius: ";
        cin >> r;

        cout << "Circle area of a circle is " << area_of_circle(r) << "\n";

        return 0;
}
