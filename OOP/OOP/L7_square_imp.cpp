#include <iostream>
using namespace std;
#include "square.h"

square::square() {
	length = 0;
}
square::square(double l) {
	length = l;
}
void square::findArea() {
	double area;
	area = length * length;
	cout << "\nArea of the square is: " << area << '.';
}
void square::findPerimeter() {
	double perimeter;
	perimeter = 4 * length;
	cout << "\nPerimeter of the square is: " << perimeter << '.';
}